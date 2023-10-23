/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlcpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 14:02:17 by nhan              #+#    #+#             */
/*   Updated: 2023/10/23 13:46:08 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
int	test_strlcpy(void)
{
	size_t i;
	int test;

	char str1[] = "Hello, World!";
	char dst1[15];
	char dst2[15];
	
	i = 0;
	test = 1;
	strlcpy(dst1, str1, 15);
	ft_strlcpy(dst2, str1, 15);
	while (i < ft_strlen(dst1)){
		if (dst1[i] != dst2[i])
		{
			write(1, "ft_strlcpy -> test1 : error!\n", 29);
			write(1, &dst1, ft_strlen(dst1));
			write(1, "\n", 1);
			write(1, &dst2, ft_strlen(dst1));
			write(1, "\n", 1);	
			test = 0;
			break;
		}
		i++;
	}
	if (test == 1)
	{
		write(1, "ft_strlcpy -> test1 : ok!\n", 26);
	}

	char str2[] = "This is a long string";
	char dst3[15];
	char dst4[15];

	strlcpy(dst3, str2, 10);
	ft_strlcpy(dst4, str2, 10);
	i = 0;
	while(i < ft_strlen(dst3))
	{
		if (dst3[i] != dst4[i])
		{
			write(1, "ft_strlcpy -> test2 : error!\n", 29);
			write(1, &dst3, ft_strlen(dst3));
			write(1, "\n", 1);
			write(1, &dst4, ft_strlen(dst4));
			write(1, "\n", 1);
			test = 0;
			break;
		}
		i++;
	}
	if (test == 1)
	{
		write(1, "ft_strlcpy -> test2 : ok!\n", 26);
	}

	char str3[] = "";
	char dst5[15];	
	char dst6[15];

	strlcpy(dst5, str3, 10);
	ft_strlcpy(dst6, str3, 10);
	i = 0;
	while(i < ft_strlen(dst5))
	{
		if (dst5[i] != dst6[i])
		{
			write(1, "ft_strlcpy -> test2 : error!\n", 29);
			write(1, &dst5, ft_strlen(dst5));
			write(1, "\n", 1);
			write(1, &dst6, ft_strlen(dst6));
			write(1, "\n", 1);
			test = 0;
			break;
		}
		i++;
	}
	if (test == 1)
	{
		write(1, "ft_strlcpy -> test3 : ok!\n", 26);
	}

	char str4[] = "Test";
	char dst7[15];	
	char dst8[15];

	bzero(dst7, 15);
	bzero(dst8, 15);
	strlcpy(dst7, str4, 0);
	ft_strlcpy(dst8, str4, 0);
	i = 0;
	while(i < ft_strlen(dst7))
	{
		if (dst7[i] != dst8[i])
		{
			write(1, "ft_strlcpy -> test4 : error!\n", 29);
			write(1, &dst7, ft_strlen(dst7));
			write(1, "\n", 1);
			write(1, &dst8, ft_strlen(dst8));
			write(1, "\n", 1);
			test = 0;
			break;
		}
		i++;
	}
	if (test == 1)
	{
		write(1, "ft_strlcpy -> test4 : ok!\n", 26);
	}

	char str5[] = "Hello";
	char dst9[15];	
	char dst10[15];

	bzero(dst9, 15);
	bzero(dst10, 15);
	strlcpy(dst9, str5, 1);
	ft_strlcpy(dst10, str5, 1);
	i = 0;
	while(i < ft_strlen(dst9))
	{
		if (dst9[i] != dst10[i])
		{
			write(1, "ft_strlcpy -> test5 : error!\n", 29);		
			write(1, &dst9, ft_strlen(dst9));
			write(1, "\n", 1);
			write(1, &dst10, ft_strlen(dst10));
			write(1, "\n", 1);
			test = 0;
			break;
		}
		i++;
	}
	if (test == 1)
	{
		write(1, "ft_strlcpy -> test5 : ok!\n", 26);
	}
	
	char str6[] = "Test";
	char dst11[15];	
	char dst12[15];

	bzero(dst11, 15);
	bzero(dst12, 15);
	strlcpy(dst11, str6, 1);
	ft_strlcpy(dst12, str6, 1);
	i = 0;
	while(i < ft_strlen(dst11))
	{
		if (dst11[i] != dst12[i])
		{
			write(1, "ft_strlcpy -> test6 : error!\n", 29);
			write(1, &dst11, ft_strlen(dst11));
			write(1, "\n", 1);
			write(1, &dst12, ft_strlen(dst12));
			write(1, "\n", 1);
			test = 0;
			break;
		}
		i++;
	}
	if (test == 1)
	{
	 	write(1, "ft_strlcpy -> test6 : ok!\n", 26);
	}
	
	char dst13[15];	
	char dst14[15];

	bzero(dst13, 15);
	bzero(dst14, 15);
	strlcpy(dst13, "test en direct", 15);
	ft_strlcpy(dst14, "test en direct", 15);
	i = 0;
	while(i < ft_strlen(dst11))
	{
		if (dst11[i] != dst12[i])
		{
			write(1, "ft_strlcpy -> test7 : error!\n", 29);
			write(1, &dst11, ft_strlen(dst11));
			write(1, "\n", 1);
			write(1, &dst12, ft_strlen(dst12));
			write(1, "\n", 1);
			test = 0;
			break;
		}
		i++;
	}
	if (test == 1)
	{
	 	write(1, "ft_strclpy -> test7 : ok!", 26);
	}
	return (1);
}
