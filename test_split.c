/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_split.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 09:00:40 by nhan              #+#    #+#             */
/*   Updated: 2023/10/25 19:40:49 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_test(char *t, char *s, char c, int exp, char **expstr)
{
	char **d = ft_split(s, c);	
	int i;
	int test;

	test = 1;
	i = 0;
	if (d == 0)
	{
		if (exp == 0 && expstr == 0)
		{
			write(1, "ft_split -> ", 12);
			write(1, t, ft_strlen(t));
			write(1, " : ok!", 7);
			return (1);
		}
		else
		{
			write(1, "ft_split -> ", 12);
			write(1, t, ft_strlen(t));
			write(1, " : error! \n expected -> NULL\n", 29);

		}
	}
	while (d[i] != 0 || i < exp)
	{	
		if (strcmp(d[i], expstr[i]) != 0)
			test = 0;
		i++;
	}
	if (test == 1 && i == exp)
	{
		write(1, "ft_split -> ", 12);
		write(1, t, ft_strlen(t));
		write(1, " : ok!", 7);
		return (1);
	}
	else
	{
		
		write(1, "ft_split -> ", 12);
		write(1, t, ft_strlen(t));
		write(1, " : error! \nStart :\n", 19);
		int j = 0;
		char *temp;
		while (d[j] != 0 || j < exp)
		{
			temp = strdup(d[j]);
			write(1, temp, ft_strlen(temp));
			write(1, "****", 6);
			temp = strdup(expstr[j]);
			write(1, temp, ft_strlen(temp));
			write(1, "\n", 1);
			j++;
		}
		write(1, "end", 3);
		return (0);
	}
}




int	test_split(void)
{
	int test;
	
	char *str1[] =  {"test","test","test","test","test"};
	test = ft_test("test1", "testctestctestctestctest", 'c', 5, str1);
	write(1, "\n", 1);
	char *str2[] =  {"test","test","test","test","test"};
	test = ft_test("test2", "test\ntest\ntest\ntest\ntest", '\n', 5, str2);
	write(1, "\n", 1);
	char *str3[] =  {"test\ntest\ntest\ntest\ntest"};
	test = ft_test("test3", "test\ntest\ntest\ntest\ntest", '\0', 1, str3);
	write(1, "\n", 1);
	char *str4[] =  {""};
	test = ft_test("test4", "ccccccccccccccccccccccccc", 'c', 0, str4);
	write(1, "\n", 1);
	char *str5[] =  {"test","test","test","test","test"};
	test = ft_test("test5", "ctestctestctestctestctestc", 'c', 5, str5);
	write(1, "\n", 1);
	char *str6[] =  {""};
	test = ft_test("test6", "\0test\0test\0test\0test\0test\0", '\0', 0, str6);
	write(1, "\n", 1);
	char *str7[] = {""};
	test = ft_test("test7", "   " , ' ', 0, str7);
	write(1, "\n", 1);
	char *str8[] = {NULL};
	test = ft_test("test8", "" , 'c', 0, str8);
	write(1, "\n", 1);
	char *str9[] =  {"test","test","test","test","test"};
	test = ft_test("test9", "\n\n\ntest\n\n\ntest\ntest\ntest\ntest", '\n', 5, str9);
	write(1, "\n", 1);
	char *str10[] =  {"test","test","test","test","test"};
	test = ft_test("test10", "test\n\n\ntest\ntest\ntest\ntest\n\n\n", '\n', 5, str10);

	return (test);
}
