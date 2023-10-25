/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 17:12:56 by nhan              #+#    #+#             */
/*   Updated: 2023/10/25 10:56:54 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, char *src, size_t len)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0' && i < len)
	{
		dst[i] = src[i];
		i++;
	}
	while (i < len)
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (!ft_strlen(s1))
		return (ft_calloc(1, 1));
	i = 0;
	j = ft_strlen(s1);
	while (i < j && ft_char_in_str(set, s1[i]))
		i++;
	while (j > i && ft_char_in_str(set, s1[j - 1]))
		j--;
	str = (char *) malloc ((j - i) * sizeof(char));
	if (!str)
		return (NULL);
	ft_strncpy(str, (char *)(s1 + i), j - i);
	return (str);
}
