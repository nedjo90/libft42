/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlcat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 14:04:35 by nhan              #+#    #+#             */
/*   Updated: 2023/10/23 13:39:27 by nhan             ###   ########.fr       */
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

	//test2
	char dst3[17] = "coucou";
	char dst4[17] = "coucou";
	
	i = 0;
	lib = strlcat(dst3, src1, 17);
	ft = ft_strlcat(dst4, src1, 17);
	while(dst3[i] && dst4[i])
	{
		if(dst3[i] != dst4[i] && lib != ft)
		{
			write(1, "ft_strlcat -> test2 : error\n", 28);
			i = 0;
			while(dst3[i])
				write(1, &dst3[i++], 1);
			write(1, "\n", 1);
			i = 0;
			while(dst4[i])
				write(1, &dst4[i++], 1);
			test = 0;
			break;
		}
		i++;
	}
	if (test == 1)
		write(1, "ft_strlcat -> test2 : ok!\n", 26);

	//test3
	char dst5[17] = "coucou";
	char dst6[17] = "coucou";
	
	i = 0;
	lib = strlcat(dst5, "testtesttest", 11);
	ft = ft_strlcat(dst6, "testtesttest", 11);

	while(dst5[i] && dst6[i])
	{
		if(dst5[i] != dst6[i] && lib != ft)
		{
			write(1, "ft_strlcat -> test3 : error\n", 28);
			i = 0;
			while(dst5[i])
				write(1, &dst5[i++], 1);
			write(1, "\n", 1);
			i = 0;
			while(dst6[i])
				write(1, &dst6[i++], 1);
			test = 0;
			break;
		}
		i++;
	}
	if (test == 1)
		write(1, "ft_strlcat -> test3 : ok!\n", 26);
        //test4
	char dst7[] = "";
	char dst8[] = "";
	
	i = 0;
	lib = strlcat(dst7, "testtesttest", 0);
	ft = ft_strlcat(dst8, "testtesttest", 0);

	while(dst7[i] && dst8[i])
	{
		if(dst7[i] != dst8[i] && lib != ft)
		{
			write(1, "ft_strlcat -> test4 : error\n", 28);
			i = 0;
			while(dst7[i])
				write(1, &dst7[i++], 1);
			write(1, "\n", 1);
			i = 0;
			while(dst8[i])
				write(1, &dst8[i++], 1);
			test = 0;
			break;
		}
		i++;
	}
	if (test == 1)
		write(1, "ft_strlcat -> test4 : ok!\n", 26);

	//test5
	char dst9[5] = "";
	char dst10[5] = "";
	
	i = 0;
	lib = strlcat(dst9, "testtesttest", 5);
	ft = ft_strlcat(dst10, "testtesttest", 5);

	while(dst9[i] && dst10[i])
	{
		if(dst9[i] != dst10[i] && lib != ft)
		{
			write(1, "ft_strlcat -> test5 : error\n", 28);
			i = 0;
			while(dst9[i])
				write(1, &dst9[i++], 1);
			write(1, "\n", 1);
			i = 0;
			while(dst10[i])
				write(1, &dst10[i++], 1);
			test = 0;
			break;
		}
		i++;
	}
	if (test == 1)
		write(1, "ft_strlcat -> test5 : ok!\n", 26);

	//test6
	char dst11[4] = "test";
	char dst12[4] = "test";
	
	i = 0;
	lib = strlcat(dst11, "test", 4);
	ft = ft_strlcat(dst12, "test", 4);

	while(dst11[i] && dst12[i])
	{
		if(dst11[i] != dst12[i] && lib != ft)
		{
			write(1, "ft_strlcat -> test6 : error\n", 28);
			i = 0;
			while(dst11[i])
				write(1, &dst11[i++], 1);
			write(1, "\n", 1);
			i = 0;
			while(dst12[i])
				write(1, &dst12[i++], 1);
			test = 0;
			break;
		}
		i++;
	}
	if (test == 1)
		write(1, "ft_strlcat -> test6 : ok!\n", 26);

	//test7
	char *dst13 = (char *) malloc(10 * sizeof(char));
	char *dst14 = (char *) malloc(10 * sizeof(char));

	i = 0;
	lib = strlcat(dst13, "testtest", 5);
	ft = ft_strlcat(dst14, "testtest", 5);

	while(dst13[i] && dst14[i])
	{
		if(dst13[i] != dst14[i] && lib != ft)
		{
			write(1, "ft_strlcat -> test7 : error\n", 28);
			i = 0;
			while(dst13[i])
				write(1, &dst13[i++], 1);
			write(1, "\n", 1);
			i = 0;
			while(dst14[i])
				write(1, &dst14[i++], 1);
			test = 0;
			break;
		}
		i++;
	}
	if (test == 1)
		write(1, "ft_strlcat -> test7 : ok!", 26);

	return (test);
}
