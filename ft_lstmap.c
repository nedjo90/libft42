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

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_temp;
	t_list	*new_lst;

	if (!lst || !(*f) || !(*del))
		return (NULL);
	new_lst = NULL;
	while (lst)
	{
		new_temp = ft_lstnew((*f)(lst->content));
		ft_lstadd_back(&new_lst, new_temp);
		if (ft_lstlast(new_lst) == NULL)
		{
			ft_lstclear(&new_lst, (*del));
			return (NULL);
		}
		lst = lst->next;
	}
	return (new_lst);
}
