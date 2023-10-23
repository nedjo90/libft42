/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memmove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 13:59:52 by nhan              #+#    #+#             */
/*   Updated: 2023/10/23 09:51:08 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
int test_memmove(void)
{
	char	c;
	int srcTab1[] = {0,1,2,3,4,5,6,7,8,9};
	int srcTab2[] = {0,1,2,3,4,5,6,7,8,9};
	int *destTab1 = srcTab1 + 1;
	int *destTab2 = srcTab2 + 1;
	int i = 0;
	int test = 1;

	memmove(destTab1, srcTab1, sizeof(int) * 9);
	ft_memmove(destTab2, srcTab2, sizeof(int) * 9);
	while(i < 9)
	{
		if (destTab1[i] != destTab2[i])
		{
			write(1, "ft_memmove -> test1 : error\n", 28);
			i = 0;
			while (i < 9)
			{
				c = destTab1[i] + 48;
				write(1, &c, 1);
				write(1, ",", 1);;
				i++;
			}
			write(1, "\n", 1);
			i = 0;
			while (i < 9)
			{
				c = destTab2[i] + 48;
				write(1, &c, 1);
					write(1, ",", 1);
				i++;
			}
			test = 0;
			break;
		}
		i++;
	}
	if (test == 1)
	{
		write(1, "ft_memmove -> test1 : ok!\n", 26);
	}

	int *srcTab3 = srcTab1 + 1;
	int *srcTab4 = srcTab2 + 1;
	int *destTab3 = srcTab1;
	int *destTab4 = srcTab2;
	i = 0;
	memmove(destTab3, srcTab3, sizeof(int) * 9);
	ft_memmove(destTab4, srcTab4, sizeof(int) * 9);
	while(i < 9)
	{
		if (destTab3[i] != destTab4[i])
		{
			write(1, "ft_memmove -> test2 : error\n", 28);
			i = 0;
			while (i < 9)
			{
				c = destTab3[i] + 48;
				write(1, &c, 1);
				write(1, ",", 1);;
				i++;
			}
			write(1, "\n", 1);
			i = 0;
			while (i < 9)
			{
				c = destTab4[i] + 48;
				write(1, &c, 1);
					write(1, ",", 1);
				i++;
			}
			test = 0;
			break;
		}
		i++;
	}
	if (test == 1)
	{
		write(1, "ft_memmove -> test2 : ok!\n", 26);
	}

	char srcStr1[] = "Je fais du couper decaler";
	char srcStr2[] = "Je fais du couper decaler";
	char *destStr1 = srcStr1 + 1;
	char *destStr2 = srcStr2 + 1;

	memmove(destStr1, srcStr1, sizeof(char) * 5);
	ft_memmove(destStr2, srcStr2, sizeof(char) * 5);
	i = 0;
	while (srcStr1[i])
	{
		if (srcStr1[i] != srcStr2[i])
		{
			write(1, "ft_memmove -> test3 : error\n", 28);
			write(1, srcStr1, strlen(srcStr1));
			write(1, "\n", 1);
			write(1, srcStr2, strlen(srcStr2));
			test = 0;
			break;
		}
		i++;
	}
	if (test == 1)
	{
		write(1, "ft_memmove -> test3 : ok!\n", 26);
	}
	
	char *srcStr3 = srcStr1 + 1;
	char *srcStr4 = srcStr2 + 1;
	char *destStr3 = srcStr1;
	char *destStr4 = srcStr2;
	
	memmove(destStr3, srcStr3, sizeof(char) * 5);
	ft_memmove(destStr4, srcStr4, sizeof(char) * 5);
	i = 0;
	while (srcStr3[i])
	{
		if (srcStr3[i] != srcStr4[i])
		{
			write(1, "ft_memmove -> test4 : error\n", 28);
			write(1, srcStr3, strlen(srcStr3));
			write(1, "\n", 1);
			write(1, srcStr4, strlen(srcStr4));
			test = 0;
			break;
		}
		i++;
	}
	if (test == 1)
	{
		write(1, "ft_memmove -> test4 : ok!", 26);
	}

	return (test);
}

