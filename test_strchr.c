/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 14:18:54 by nhan              #+#    #+#             */
/*   Updated: 2023/10/23 14:43:58 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


int test_strchr(void)
{
	char str[] = "fkljwbvsdkfbvidosubnvioqerbndvoiqerbnvoiqebrnv";
	if ((strchr(str, 'o') != ft_strchr(str, 'o')) || (strchr(str, '0') != ft_strchr(str, '0')) || (strchr(str, '\n') != ft_strchr(str, '\n')) || (strchr(str, '\0') != ft_strchr(str, '\0')))
	{
		write(1, "ft_strchr -> error!", 19);
		return (0);
	}
	write(1, "ft_strchr -> ok!", 16);
	return (1);
}
