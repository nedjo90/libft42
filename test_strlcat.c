/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlcat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 14:04:35 by nhan              #+#    #+#             */
/*   Updated: 2023/10/23 09:53:13 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
int	test_strlcat(void)
{
	//test1
	char src1[14] = "vbdfkjbvdskjfv";
	char dst1[30] = "coucou";
	char dst2[30] = "coucou";
	int	i = 0;
	int	test = 1;
	size_t	lib;
	size_t	ft;

	lib = strlcat(dst1, src1, 14);
	ft = ft_strlcat(dst2, src1, 14);
	while(dst1[i] && dst2[i])
	{
		if(dst1[i] != dst2[i] && lib != ft)
		{
			write(1, "ft_strlcat -> test1 : error\n", 28);
			i = 0;
			while(dst1[i])
				write(1, &dst1[i++], 1);
			write(1, "\n", 1);
			i = 0;
			while(dst2[i])
				write(1, &dst2[i++], 1);
			test = 0;
			break;
		}
		i++;
	}
	if (test == 1)
		write(1, "ft_strlcat -> test1 : ok!\n", 26);

	return (test);
}
