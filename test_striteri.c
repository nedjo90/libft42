/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_striteri.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 22:15:47 by nhan              #+#    #+#             */
/*   Updated: 2023/10/26 09:58:52 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri_pp(unsigned int n, char *s)
{
	(void)n;
	s[n]++;
}

void	ft_striteri_odd_even(unsigned int n, char *s)
{
	(void)n;
	if ((s[n] - 48) % 2 == 0)
		s[n] = 'P';
	else
	{
		s[n] = 'I';
	}
}

void	ft_striteri_ip(unsigned int n, char *s)
{
	if (n != 0 && n % 3 == 0)
		s[n] = '.';
}

int	ft_test_striteri(char *t, char *s, char *exp, void (*f)(unsigned int, char *))
{
	
	ft_striteri(s, f);
	if ((s == NULL && exp == NULL) || (strcmp(s, exp) == 0))
	{
		write(1, "ft_striteri -> ", 15);
		write(1, t, ft_strlen(t));
		write(1, " : ok!", 7);
			return (1);
	}
	else
	{
		write(1, "ft_striteri -> ", 14);
		write(1, t, ft_strlen(t));
		write(1, " : error!", 9);
		return (0);
	}
}

int	test_striteri(void)
{
	int	test = 1;
	char s1[] = "0123456789";
	test = ft_test_striteri("test1", s1,"123456789:", ft_striteri_pp);
	write(1, "\n", 1);
	char s2[] = "0123456789";
	test = ft_test_striteri("test2", s2, "PIPIPIPIPI", ft_striteri_odd_even);
	write(1, "\n", 1);
	char s3[] = "100168151221";
	test = ft_test_striteri("test3", s3, "100.68.51.21", ft_striteri_ip);
	write(1, "\n", 1);
	char *s4 = NULL;
	test = ft_test_striteri("test4", s4, NULL, NULL);
	return (test);
}
