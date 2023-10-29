/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 19:04:30 by nhan              #+#    #+#             */
/*   Updated: 2023/10/28 19:57:07 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclearlst(t_list *lst, void (*del)(void *))
{
	t_list	*temp;

	if (!lst)
		return ;
	while(lst->next != NULL)
	{
		temp = lst->next;
		del(lst->content);
		free(lst);
		lst = temp;
	}
	del(lst->content);
	free(lst);
	lst = NULL;
}


t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_temp;
	t_list	*new_start;

	if (!lst || !(*f) || !(*del))
		return (NULL);
	new_start = NULL;
	while (lst != NULL)
	{
		new_temp = ft_lstnew(f(lst->content));
		if (new_temp == NULL)
		{
			free(new_temp);
			ft_lstclearlst(new_start, (*del));
			free(new_start);
			return (NULL);
		}
		ft_lstadd_back(&new_start, new_temp);
		lst = lst->next;
	}
	return (new_start);
}
