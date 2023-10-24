/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strjoin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:43:35 by nhan              #+#    #+#             */
/*   Updated: 2023/10/24 16:53:36 by nhan             ###   ########.fr       */
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
	return (test);
}
