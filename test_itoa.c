/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_itoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 20:10:52 by nhan              #+#    #+#             */
/*   Updated: 2023/10/25 20:32:46 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_test_itoa(char *t, int n, char *nb)
{
	char *test_nb = ft_itoa(n);
	if (strcmp(test_nb, nb) == 0)
	{
		write(1, "ft_itoa -> ", 11);
		write(1, t, ft_strlen(t));
		write(1, " : ok!", 7);
		return (1);
	}
	else
	{
		write(1, "ft_itoa -> ", 11);
		write(1, t, ft_strlen(t));
		write(1, " : error! \n", 11);
		write(1, test_nb, ft_strlen(test_nb));
		write(1, " != ", 4);
		write(1, nb, ft_strlen(nb));
		return (0);
	}
}
int	test_itoa(void)
{
	int test = 1;
	test = ft_test_itoa("test1", 1, "1");
	write(1, "\n", 1);
	test = ft_test_itoa("test2", -1, "-1");
	write(1, "\n", 1);
	test = ft_test_itoa("test3", INT_MIN, "-2147483648");
	write(1, "\n", 1);
	test = ft_test_itoa("test4", INT_MAX, "2147483647");
	write(1, "\n", 1);
	test = ft_test_itoa("test5", 0, "0");
	write(1, "\n", 1);
	test = ft_test_itoa("test6", 452232, "452232");
	write(1, "\n", 1);
	test = ft_test_itoa("test7", -452232, "-452232");
	write(1, "\n", 1);
	test = ft_test_itoa("test8", -404, "-404");
	write(1, "\n", 1);
	test = ft_test_itoa("test9", 80, "80");
	
	return (test);
}
