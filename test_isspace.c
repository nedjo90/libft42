/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isspace.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 09:40:42 by nhan              #+#    #+#             */
/*   Updated: 2023/10/24 09:43:42 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int test_isspace(void)
{
	int test = 1;
	int c = 0;
	while (c < 128)
	{
		if(isspace(c) != ft_isspace(c))
		{
			write(1, "ft_isspace -> test1 : error!", 28);
			test = 0;
			break;
		}
		c++;
	}
	if(test == 1)
	{
		
		write(1, "ft_isspace -> test1 : ok!", 25);
	}
	return (test);
}
