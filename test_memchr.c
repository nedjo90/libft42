/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 22:28:02 by nhan              #+#    #+#             */
/*   Updated: 2023/10/23 22:57:13 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	test_memchr(void)
{
	//test1
	char	s1[] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
	int	test = 1;

	if (memchr(s1, 37, 10) != ft_memchr(s1, 37, 10))
	{
		write(1, "ft_memchr -> test1 : error!\n",28);
		test = 0;
	}
	else
	{
		write(1, "ft_memchr -> test1 : ok!\n", 25);
	}
	//test2
	char	s2[] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };

	if (memchr(s2, 70, 10) != ft_memchr(s2, 70, 10))
	{
		write(1, "ft_memchr -> test2 : error!\n",28);
		test = 0;
	}
	else
	{
		write(1, "ft_memchr -> test2 : ok!\n", 25);
	}

	//test3
	char	s3[] = "testtest";
	
	if (memchr(s3, 'a', 10) != ft_memchr(s3, 'a', 10))
	{
		write(1, "ft_memchr -> test3 : error!\n",28);
		test = 0;
	}
	else
	{
		write(1, "ft_memchr -> test3 : ok!\n", 25);
	}

	//test4
	char	s4[] = "testtest";
	
	if (memchr(s4, 'e', 10) != ft_memchr(s4, 'e', 10))
	{
		write(1, "ft_memchr -> test4 : error!\n",28);
		test = 0;
	}
	else
	{
		write(1, "ft_memchr -> test4 : ok!\n", 25);
	}

	//test5
	char	s5[] = "testtest";
	
	if (memchr(s5, 0, 10) != ft_memchr(s5, 0, 10))
	{
		write(1, "ft_memchr -> test5 : error!\n",28);
		test = 0;
	}
	else
	{
		write(1, "ft_memchr -> test5 : ok!\n", 25);
	}

	//test6
	char	*s6 = NULL;
	
	if (memchr(s6, 'e', 0) != ft_memchr(s6, 'e', 0))
	{
		write(1, "ft_memchr -> test6 : error!\n",28);
		test = 0;
	}
	else
	{
		write(1, "ft_memchr -> test6 : ok!", 24);
	}


	return (test);
}
