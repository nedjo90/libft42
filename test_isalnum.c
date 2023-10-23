/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isalnum.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 13:48:04 by nhan              #+#    #+#             */
/*   Updated: 2023/10/23 09:49:46 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
int	test_isalnum(void)
{
	int		c;
	char	*str;

	c = 0;
	str = (char *) malloc (128 * sizeof (char));
	while (c < 128)
	{
		str[c] = c;
		if (isdigit(str[c]) != ft_isdigit(str[c]))
		{
			write(1, &str[c], 1);
			write(1, "ft_isalnum : error", 18);
			free(str);
			return (0);
		}
		c++;
	}
	write(1, "ft_isalnum : ok!", 16);
	free(str);
	return (1);
}
