/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 13:53:14 by nhan              #+#    #+#             */
/*   Updated: 2023/10/20 19:25:24 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	test_strlen(void)
{
	int	test;

	test = 1;
	//test1
	if (strlen("coucou ") != ft_strlen("coucou "))
	{
		write(1, "ft_strlen -> test1 : error\n", 27);
		test = 0;
	}
	else{
		write(1, "ft_strlen -> test1 : ok!\n", 25);
	}
	//test2
	if (strlen("\v\f\r\t\n  seafhlasehflulj") != ft_strlen("\v\f\r\t\n  seafhlasehflulj"))
	{
		write(1, "ft_strlen -> test2 : error\n", 27);
		test = 0;
	}
	else{
		write(1, "ft_strlen -> test2 : ok!\n", 25);
	}
	//test3
	if (strlen("") != ft_strlen(""))
	{
		write(1, "ft_strlen -> test3 : error\n", 27);
		test = 0;
	}
	else{
		write(1, "ft_strlen -> test3 : ok!", 24);
	}
	return (test);
}
