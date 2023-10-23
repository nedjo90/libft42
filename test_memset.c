/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 13:55:17 by nhan              #+#    #+#             */
/*   Updated: 2023/10/23 09:51:19 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
int	test_memset(void)
{
	int	test;
	int	i;

	i = 0;
	test = 1;
	char str[] = "il y a des points au debut";
	char str2[] = "il y a des points au debut";
	char *testStr = (char *)memset(str, '.', sizeof(char) * 4);
	char *testStr2 = (char *)ft_memset(str2, '.', sizeof(char) * 4);
	if (strcmp(testStr, testStr2) != 0)
	{
		write(1, "ft_memset -> test1 : error\n", 27);
		test = 0;
	}
	while (str[i])
	{
		if (testStr[i] != testStr2[i])
		{
			write(1, "ft_memset -> test1 : error\n", 27);
			write(1, testStr, strlen(testStr));
			write(1, "\n", 1);
			write(1, testStr2, strlen(testStr2));
			write(1, "\n", 1);
			test = 0;
			break;
		}
		i++;
	}
	if (test == 1)
	{
		write(1, "ft_memset -> test1 : ok!\n", 25);
	}
	
	i = 0;
	int tab[] = {0,1,2,3,4,5,6,7,8,9};
	int tab2[] = {0,1,2,3,4,5,6,7,8,9};
	int *testTab = memset(tab, -1, sizeof(int) * 4);
	int *testTab2 = ft_memset(tab2, -1, sizeof(int) * 4);

	while (i < 10)
	{
		if (testTab[i] != testTab2[i])
		{
			write(1, "ft_memset -> test2 : error\n", 27);
			int	j;
			char	c;
			j = 0;
			while(j < 10){
				c = testTab[j] + 48;
				write(1, &c, 1);
				j++;
			}
			write(1, "\n", 1);
			j = 0;
			while(j < 10){
				c = testTab2[j] + 48;
				write(1, &c, 1);
				j++;
			}
			test = 0;
			break;
		}
		i++;
	}
	if (test == 1)
	{
		write(1, "ft_memset -> test2 : ok!\n", 25);
	}

	testTab = memset(tab, 0, sizeof(int) * 4);
	testTab2 = ft_memset(tab2, 0, sizeof(int) * 4);

	while (i < 10)
	{
		if (testTab[i] != testTab2[i])
		{
			write(1, "ft_memset -> test3 : error\n", 27);
			int	j;
			char	c;
			j = 0;
			while(j < 10){
				c = testTab[j] + 48;
				write(1, &c, 1);
				j++;
			}
			write(1, "\n", 1);
			j = 0;
			while(j < 10){
				c = testTab2[j] + 48;
				write(1, &c, 1);
				j++;
			}
			test = 0;
			break;
		}
		i++;
	}
	if (test == 1)
	{
		write(1, "ft_memset -> test3 : ok!\n", 25);
	}
	
	testTab = memset(tab + 4, -2147483648, sizeof(int) * 4);
	testTab2 = ft_memset(tab2 + 4, -2147483648, sizeof(int) * 4);

	while (i < 10)
	{
		if (testTab[i] != testTab2[i])
		{
			write(1, "ft_memset -> test4 : error\n", 27);
			int	j;
			char	c;
			j = 0;
			while(j < 10){
				c = testTab[j] + 48;
				write(1, &c, 1);
				j++;
			}
			write(1, "\n", 1);
			j = 0;
			while(j < 10){
				c = testTab2[j] + 48;
				write(1, &c, 1);
				j++;
			}
			test = 0;
			break;
		}
		i++;
	}
	if (test == 1)
	{
		write(1, "ft_memset -> test4 : ok!", 25);
	}
	return (test);
}
