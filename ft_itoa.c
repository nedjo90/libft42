/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 19:45:04 by nhan              #+#    #+#             */
/*   Updated: 2023/10/25 20:43:24 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_nb_nb(int nb)
{
	int	i;

	i = 0;
	while (nb != 0)
	{
		nb /= 10;
		i++;
	}
	return (i);
}

int	ft_abs(int n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}

char	*ft_itoa(int n)
{
	char	*nb;
	int		i;

	i = ft_nb_nb(n);
	if (n == 0)
		return (ft_strdup("0"));
	if (n >= 0)
		nb = malloc(i * sizeof(char));
	else
	{
		nb = malloc((i + 1) * sizeof(char));
		i++;
	}
	if (!nb)
		return (NULL);
	nb[i--] = '\0';
	while (n != 0)
	{
		nb[i--] = ft_abs(n % 10) + 48;
		n /= 10;
	}
	if (i == 0)
		nb[i] = '-';
	return (nb);
}
