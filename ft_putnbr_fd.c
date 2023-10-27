/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 12:45:28 by nhan              #+#    #+#             */
/*   Updated: 2023/10/26 22:27:59 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_nb(int n)
{
	int	i;

	if (n == 0)
		return (1);
	i = 0;
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

void	ft_putnbr2_fd(int n, int fd)
{
	char	nb;

	if (n > 0)
	{
		ft_putnbr2_fd(n / 10, fd);
		nb = n % 10 + 48;
		ft_putchar_fd(nb, fd);
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if (n == 0)
	{
		ft_putchar_fd('0', fd);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n *= -1;
	}
	ft_putnbr2_fd(n, fd);
}
