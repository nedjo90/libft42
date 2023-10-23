/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isascii.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 13:49:59 by nhan              #+#    #+#             */
/*   Updated: 2023/10/23 09:50:15 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
int	test_isascii(void)
{
	int		c;
	char	*str;

	c = 0;
	str = (char *) malloc (256 * sizeof (char));
	while (c < 256)
	{
		str[c] = c;
		if (isascii(str[c]) != ft_isascii(str[c]))
		{
			write(1, &str[c], 1);
			write(1, "ft_isascii : error", 18);
			free(str);
			return (0);
		}
		c++;
	}
	write(1, "ft_isascii : ok!", 16);
	free(str);
	return (1);
}

