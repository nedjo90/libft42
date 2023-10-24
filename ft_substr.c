/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:22:30 by nhan              #+#    #+#             */
/*   Updated: 2023/10/24 16:37:33 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	n;

	if (!s)
		return (NULL);
	str = (char *) malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	n = ft_strlen(s);
	if (start > n)
		len = 0;
	while (i < len && start < n && i < n)
	{
		str[i] = s[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}
