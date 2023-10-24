/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 17:12:56 by nhan              #+#    #+#             */
/*   Updated: 2023/10/24 17:36:25 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_istrim(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	*str;

	if (s1 == NULL)
		return (NULL);
	i = 0;
	k = 0;
	j = ft_strlen(s1) - 1;
	while (ft_istrim(s1[i], set) && i <= j)
		i++;
	while (ft_istrim(s1[j], set) && j >= 0)
		j--;
	str = (char *) malloc ((i + j + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (i <= j)
	{
		str[k] = s1[i];
		k++;
		i++;
	}
	str[k] = '\0';
	return (str);
}
