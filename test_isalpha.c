/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isalpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 13:32:14 by nhan              #+#    #+#             */
/*   Updated: 2023/10/23 09:49:58 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
int	test_isalpha(void)
{
	int		c;
	char	*str;

	c = 0;
	str = (char *) malloc (128 * sizeof(char));
	while (c < 128)
	{
		str[c] = c;
		if (isalpha(str[c]) != ft_isalpha(str[c]))
		{
			write(1, &str[c], 1);
			write(1, "ft_isalpha : error", 18);
			free(str);
			return (0);
		}
		c++;
	}
	write(1, "ft_isalpha : ok!", 16);
	free(str);
	return (1);
}
