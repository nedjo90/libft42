/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 14:01:53 by nhan              #+#    #+#             */
/*   Updated: 2023/10/27 14:43:11 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	size_t	j;

	if (dst == src)
		return (dst);
	j = len;
	if (dst >= src && dst < src + len)
	{
		while (len > 0)
		{
			((char *)dst)[len - 1] = ((char const *)src)[len - 1];
			len--;
		}
	}
	else
	{
		i = 0;
		while (i < j)
		{
			((char *)dst)[i] = ((char const *)src)[i];
			i++;
		}
	}
	return (dst);
}
