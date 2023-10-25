/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strtrim.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 17:13:59 by nhan              #+#    #+#             */
/*   Updated: 2023/10/24 19:33:53 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	test_strtrim(void)
{
	int	test = 1;

	//test1
	char *d1 = ft_strtrim("      test       ", " ");
	if (strcmp(d1, "test") == 0)
	{

		write(1, "ft_strtrim -> test1 : ok!\n", 26);
	}
	else
	{
		
		printf("-%s-", d1);
		write(1, "ft_strtrim -> test1 : error!\n", 29);
		test = 0;
	}

	//test2
	char *d2 = ft_strtrim("   \n   test       \n", " \n");
	if (strcmp(d2, "test") == 0)
	{
		write(1, "ft_strtrim -> test2 : ok!\n", 26);
	}
	else
	{
		write(1, "ft_strtrim -> test2 : error!\n", 29);
		test = 0;
	}

	//test3
	char *d3 = ft_strtrim("      test       ", "");
	if (strcmp(d3, "      test       ") == 0)
	{
		write(1, "ft_strtrim -> test3 : ok!\n", 26);
	}
	else
	{
		write(1, "ft_strtrim -> test3 : error!\n", 29);
		test = 0;
	}

	//test4
	char *d4 = ft_strtrim("", "test");
	if (strcmp(d4, "") == 0)
	{
		write(1, "ft_strtrim -> test4 : ok!\n", 26);
	}
	else
	{
		write(1, "ft_strtrim -> test4 : error!\n", 29);
		test = 0;
	}
	
	//test5
	char *d5 = ft_strtrim("               ", "  ");
	if (strcmp(d5, "") == 0)
	{
		write(1, "ft_strtrim -> test5 : ok!\n", 26);
	}
	else
	{
		write(1, "ft_strtrim -> test5 : error!\n", 29);
		test = 0;
	}

	//test6
	char *d6 = ft_strtrim(" \t\v    \n\r\r\r\f   \v", "\n\t\v\f\r ");
	if (strcmp(d6, "") == 0)
	{
		write(1, "ft_strtrim -> test6 : ok!\n", 26);
	}
	else
	{
		write(1, "ft_strtrim -> test6 : error!\n", 29);
		test = 0;
	}

	//test7
	char *d7 = ft_strtrim("hhhhhh\n\tfdhjsvldfbv iqsubviqswbdiqbhhhh\n\r\t\nhhhh", "h\n");
	if (strcmp(d7, "\tfdhjsvldfbv iqsubviqswbdiqbhhhh\n\r\t") == 0)
	{
		write(1, "ft_strtrim -> test7 : ok!", 25);
	}
	else
	{
		write(1, "ft_strtrim -> test7 : error!", 28);
		test = 0;
	}
	




	return (test);
}
