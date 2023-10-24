/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strjoin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:43:35 by nhan              #+#    #+#             */
/*   Updated: 2023/10/24 17:37:02 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	test_strjoin(void)
{
	int	test = 1;

	char s1[] = "abcdef";
	char s2[] = "ghijkl";
	char *d1 = ft_strjoin(s1, s2);
	if (strcmp(d1, "abcdefghijkl") == 0)
	{
		write(1, "ft_strjoin -> test1 : ok!\n", 26);
	}
	else
	{
		write(1, "ft_strjoin -> test1 : error!\n", 29);
		test = 0;
	}

	//test2
	char *d2 = ft_strjoin("", s2);
	if (strcmp(d2, "ghijkl") == 0)
	{
		write(1, "ft_strjoin -> test2 : ok!\n", 26);
	}
	else
	{
		write(1, "ft_strjoin -> test2 : error!\n", 29);
		test = 0;
	}

	//test3
	char *d3 = ft_strjoin(s1, "");
	if (strcmp(d3, "abcdef") == 0)
	{
		write(1, "ft_strjoin -> test3 : ok!\n", 26);
	}
	else
	{
		write(1, "ft_strjoin -> test3 : error!\n", 29);
		test = 0;
	}
	
	//test4
	char *d4 = ft_strjoin("", "");
	if (strcmp(d4, "") == 0)
	{
		write(1, "ft_strjoin -> test4 : ok!\n", 26);
	}
	else
	{
		write(1, "ft_strjoin -> test4 : error!\n", 29);
		test = 0;
	}
	
	//test5
	char *d5 = ft_strjoin(s1 + 1, s2 + 2);
	if (strcmp(d5, "bcdefijkl") == 0)
	{
		write(1, "ft_strjoin -> test5 : ok!", 25);
	}
	else
	{
		write(1, "ft_strjoin -> test5 : error!", 28);
		test = 0;
	}

	return (test);
}
