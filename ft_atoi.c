/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 08:37:22 by nhan              #+#    #+#             */
/*   Updated: 2023/10/26 17:58:53 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(int c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	n;
	int	s;

	n = 0;
	s = 1;
	while (isspace(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			s *= -1;
		str++;
	}
	while (*str != '\0' && *str >= '0' && *str <= '9')
	{
		n *= 10;
		n += (*str - 48);
		str++;
	}
	return (n * s);
}
