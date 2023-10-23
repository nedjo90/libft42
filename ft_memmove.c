/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 14:01:53 by nhan              #+#    #+#             */
/*   Updated: 2023/10/23 09:45:21 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if(dst == src)
		return (dst);
	else if(dst > src && dst <= src + len)
	{
		int i = len - 1;
		while(i >= 0)
		{
			*(char *)(dst + i) = *(char *)(src + i);
			i--;
		}
	}
	else
	{
		memcpy(dst, src, len);
	}
	return (dst);
}
