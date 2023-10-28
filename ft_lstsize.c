/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 14:16:52 by nhan              #+#    #+#             */
/*   Updated: 2023/10/28 15:05:46 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list						*temp;
	int							size;

	size = 0;
	temp = lst;
	while (temp != NULL)
	{
		temp = temp->next;
		size++;
	}
	return (size);
}
