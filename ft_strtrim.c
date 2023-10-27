/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 17:12:56 by nhan              #+#    #+#             */
/*   Updated: 2023/10/27 15:27:26 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_char_in_str(char const *str, char c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (c == str[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strncpy(char *dst, char *src, size_t len)
{
	unsigned long long	i;

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
	unsigned long long	i;
	unsigned long long	j;
	char				*str;

	if (!s1)
		return (NULL);
	if (set == 0)
		return (ft_strdup(s1));
	i = 0;
	j = ft_strlen(s1);
	while (ft_char_in_str(set, s1[i]))
		i++;
	if (i == j)
		return (ft_calloc(1, 1));
	while (ft_char_in_str(set, s1[j - 1]))
		j--;
	str = ft_substr(s1, i, j - i);
	return (str);
}
