/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_toupper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 13:57:37 by nhan              #+#    #+#             */
/*   Updated: 2023/10/23 14:09:13 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	test_toupper(void)
{
	int	i;

	i = 0;
	while(i < 127)
	{
		if (ft_toupper(i) != toupper(i))
		{
			write(1, "ft_toupper -> error!", 20);
			return (0);
		}
		i++;
	}
	write(1, "ft_toupper -> ok!", 17);
	return (1);
}
