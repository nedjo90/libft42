/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_tolower.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 13:57:37 by nhan              #+#    #+#             */
/*   Updated: 2023/10/23 14:14:54 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	test_tolower(void)
{
	int	i;

	i = 0;
	while(i < 127)
	{
		if (ft_tolower(i) != tolower(i))
		{
			write(1, "ft_tolower -> error!", 20);
			return (0);
		}
		i++;
	}
	write(1, "ft_tolower -> ok!", 17);
	return (1);
}
