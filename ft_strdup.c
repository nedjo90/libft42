/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 14:03:45 by nhan              #+#    #+#             */
/*   Updated: 2023/10/27 14:43:38 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*copy;
	size_t	size;

	size = ft_strlen(s1);
	copy = (char *) malloc((size + 1) * sizeof(char));
	if (!copy)
		return (NULL);
	copy[size] = '\0';
	if (size == 0)
		return (copy);
	else
	{
		size--;
	}
	while (size > 0)
	{
		copy[size] = s1[size];
		size--;
	}
	copy[size] = s1[size];
	return (copy);
}
