/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strmapi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 22:15:47 by nhan              #+#    #+#             */
/*   Updated: 2023/10/26 09:13:19 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_strmapi_pp(unsigned int n, char c)
{
	(void)n;
	return (c + 1);
}

char	ft_strmapi_odd_even(unsigned int n, char c)
{
	(void)n;
	if ((c - 48) % 2 == 0)
		return ('P');
	else
	{
		return ('I');
	}
}

char	ft_strmapi_ip(unsigned int n, char c)
{
	if (n != 0 && n % 3 == 0)
		return ('.');
	return (c);
}

int	ft_test_strmapi(char *t, char *s, char *exp, char (*f)(unsigned int, char))
{
	
	char *d1 = ft_strmapi(s, f);
	if ((d1 == NULL && exp == NULL) || (strcmp(d1, exp) == 0))
	{
		write(1, "ft_strmapi -> ", 14);
		write(1, t, ft_strlen(t));
		write(1, " : ok!", 7);
			return (1);
	}
	else
	{
		write(1, "ft_strmapi -> ", 14);
		write(1, t, ft_strlen(t));
		write(1, " : error!", 9);
		return (0);
	}
}

int	test_strmapi(void)
{
	int test = 1;

	test = ft_test_strmapi("test1","0123456789", "123456789:", *(ft_strmapi_pp));
	write(1, "\n", 1);
	test = ft_test_strmapi("test2", "0123456789", "PIPIPIPIPI", *(ft_strmapi_odd_even));
	write(1, "\n", 1);
	test = ft_test_strmapi("test3","100168151221", "100.68.51.21", *(ft_strmapi_ip));
	write(1, "\n", 1);
	test = ft_test_strmapi("test4", NULL, NULL, NULL);
	return (test);
}
