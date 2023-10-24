/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 14:03:45 by nhan              #+#    #+#             */
/*   Updated: 2023/10/24 14:17:52 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*copy;
	int		size;

	size = ft_strlen(s1);
	copy = (char *) malloc((size + 1) * sizeof(char));
	copy[size--] = '\0';
	while (size >= 0)
	{
		copy[size] = s1[size];
		size--;
	}
	return (copy);
}
