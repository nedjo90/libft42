/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strtrim.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 17:13:59 by nhan              #+#    #+#             */
/*   Updated: 2023/10/24 17:37:48 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	test_strtrim(void)
{
	int	test = 1;

	char *d1 = ft_strtrim("      test       ", " ");
	if (strcmp(d1, "test") == 0)
	{
		write(1, "ft_strtrim -> test1 : ok!\n", 26);
	}
	else
	{
		write(1, "ft_strtrim -> test1 : error!\n", 29);
		test = 0;
	}




	return (test);
}
