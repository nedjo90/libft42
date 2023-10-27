/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 14:17:32 by nhan              #+#    #+#             */
/*   Updated: 2023/10/27 09:09:21 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char			chr;
	int						i;

	chr = (unsigned char)c;
	i = 0;
	while (*(s + i))
		i++;
	while (i >= 0)
	{
		if (*(unsigned char *)(s + i) == chr)
			return ((char *)(s + i));
		i--;
	}
	return (NULL);
}
