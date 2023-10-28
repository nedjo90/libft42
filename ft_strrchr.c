/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 14:17:32 by nhan              #+#    #+#             */
/*   Updated: 2023/10/28 13:19:45 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	while (i > 0)
	{
		if (*(s + i) == (unsigned char)c)
			return ((char *)(s + i));
		i--;
	}
	if (*(s + i) == (unsigned char)c)
		return ((char *)(s + i));
	return (0);
}
