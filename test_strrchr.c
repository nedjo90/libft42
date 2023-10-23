/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strrchr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 14:18:54 by nhan              #+#    #+#             */
/*   Updated: 2023/10/23 15:48:11 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


int test_strrchr(void)
{
	char str[] = "fkljwbvsdkfbvidosubnvioqerbndvoiqerbnvoiqebrnv";
	if ((strrchr(str, 'o') != ft_strrchr(str, 'o')) || (strrchr(str, '0') != ft_strrchr(str, '0')) || (strrchr(str, '\n') != ft_strrchr(str, '\n')) || (strrchr(str, '\0') != ft_strrchr(str, '\0')))
	{
		write(1, "ft_strrchr -> error!", 19);
		return (0);
	}
	write(1, "ft_strrchr -> ok!", 17);
	return (1);
}
