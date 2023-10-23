/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strnstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 00:00:33 by nhan              #+#    #+#             */
/*   Updated: 2023/10/24 00:24:58 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int test_strnstr(void)
{
	int test = 1;

	//test1
	char s1[] = "lkdjbcstestskj<dncjkqsn";
	char s2[] = "test";

	if (strnstr(s1,s2,22) != ft_strnstr(s1,s2,22))
	{
		write(1, "ft_strnstr -> test1 : error!\n", 29);
		test = 0;
	}
	else
	{
		write(1, "ft_strnstr -> test1 : ok!\n", 26);
	}

	//test2
	if (strnstr(s1,s2,3) != ft_strnstr(s1,s2,3))
	{
		write(1, "ft_strnstr -> test2 : error!\n", 29);
		test = 0;
	}
	else
	{
		write(1, "ft_strnstr -> test2 : ok!\n", 26);
	}
	
	//test3
	char s3[] = "";
	if (strnstr(s1,s3,22) != ft_strnstr(s1,s3,22))
	{
		write(1, "ft_strnstr -> test3 : error!\n", 29);
		test = 0;
	}
	else
	{
		write(1, "ft_strnstr -> test3 : ok!\n", 26);
	}

	//test4
	char s4[] = "abcdefgh";
	if (strnstr(s1,s4,22) != ft_strnstr(s1,s4,22))
	{
		write(1, "ft_strnstr -> test4 : error!\n", 29);
		test = 0;
	}
	else
	{
		write(1, "ft_strnstr -> test4 : ok!\n", 26);
	}

	//test5
	if (strnstr(s3,s4,22) != ft_strnstr(s3,s4,22))
	{
		write(1, "ft_strnstr -> test5 : error!\n", 29);
		test = 0;
	}
	else
	{
		write(1, "ft_strnstr -> test5 : ok!\n", 26);
	}

	//test6
	char s5[] = "";
	if (strnstr(s3,s5,22) != ft_strnstr(s3,s5,22))
	{
		write(1, "ft_strnstr -> test6 : error!\n", 29);
		test = 0;
	}
	else
	{
		write(1, "ft_strnstr -> test6 : ok!", 25);
	}
	return (test);
}
