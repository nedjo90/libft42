/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 13:55:42 by nhan              #+#    #+#             */
/*   Updated: 2023/10/23 09:45:37 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	//write(1, (char *)b, strlen((char *)b)); 
	while(i < len)
	{
		*(char *)(b + i) = c;
		i++;
	}
	//write(1, (char *)b, strlen((char *)b)); 
	return (b);
}
