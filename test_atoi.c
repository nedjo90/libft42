/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_atoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 08:51:48 by nhan              #+#    #+#             */
/*   Updated: 2023/10/24 09:19:18 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int test_atoi(void)
{
	int test = 1;
	
	//test1
	char s1[] = "0";
	if(atoi(s1) != ft_atoi(s1))
	{
		write(1, "ft_atoi -> test1 : error!\n", 27);
		test = 0;
	}
	else
	{
		write(1, "ft_atoi -> test1 : ok!\n", 23);
	}
	//test2
	char s2[] = "-2147483648";
	if(atoi(s2) != ft_atoi(s2))
	{
		write(1, "ft_atoi -> test2 : error!\n", 27);
		test = 0;
	}
	else
	{
		write(1, "ft_atoi -> test2 : ok!\n", 23);
	}	
	//test3
	char s3[] = "2147483647";
	if(atoi(s3) != ft_atoi(s3))
	{
		write(1, "ft_atoi -> test3 : error!\n", 27);
		test = 0;
	}
	else
	{
		write(1, "ft_atoi -> test3 : ok!\n", 23);
	}	
	//test4
	char s4[] = "0";
	if(atoi(s4) != ft_atoi(s4))
	{
		write(1, "ft_atoi -> test4 : error!\n", 27);
		test = 0;
	}
	else
	{
		write(1, "ft_atoi -> test4 : ok!\n", 23);
	}
	//test5
	char s5[] = "\t\n\t\t\t             \t+-+1554154";
	if(atoi(s5) != ft_atoi(s5))
	{
		write(1, "ft_atoi -> test5 : error!\n", 27);
		test = 0;
	}
	else
	{
		write(1, "ft_atoi -> test5 : ok!\n", 23);
	}
	//test6
	char s6[] = "\r\t      -----------2147483648";
	if(atoi(s6) != ft_atoi(s6))
	{
		write(1, "ft_atoi -> test6 : error!\n", 27);
		test = 0;
	}
	else
	{
		write(1, "ft_atoi -> test6 : ok!\n", 23);
	}	
	//test7
	char s7[] = "\r\n\f\v     +-+-+-+-+-+-+-+-+-+-+-+----------+++++++2147483647";
	if(atoi(s7) != ft_atoi(s7))
	{
		write(1, "ft_atoi -> test8 : error!\n", 27);
		test = 0;
	}
	else
	{
		write(1, "ft_atoi -> test3 : ok!\n", 23);
	}	
	//test8
	char s8[] = "\t\f\v+-+-+-1.542";
	if(atoi(s8) != ft_atoi(s8))
	{
		write(1, "ft_atoi -> test8 : error!\n", 27);
		test = 0;
	}
	else
	{
		write(1, "ft_atoi -> test8 : ok!\n", 23);
	}
	
	//test9
	char s9[] = "\t\f\va+-+-+-1.542";
	if(atoi(s9) != ft_atoi(s9))
	{
		write(1, "ft_atoi -> test9 : error!\n", 27);
		test = 0;
	}
	else
	{
		write(1, "ft_atoi -> test9 : ok!\n", 23);
	}
	return (test);
}
