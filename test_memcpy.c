/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 13:58:29 by nhan              #+#    #+#             */
/*   Updated: 2023/10/26 00:40:18 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
int	test_memcpy(void)
{
	char	srcStr[] = "je fais le teste de la copie";
	char	*destStr1;
	char	*destStr2;
	int	size;
	int	i;
	int	test;

	test = 1;
	size = (int)strlen(srcStr) + 1;
	destStr1 = malloc (size * sizeof(char));
	destStr2 = malloc (size * sizeof(char)); 
	memcpy(destStr1, srcStr, (char)size);
	ft_memcpy(destStr2, srcStr, (char)size);
	i = 0;
	while (i <= size)
	{
		if (destStr1[i] != destStr2[i])
		{ 
			write(1, "ft_memcpy -> test1 : error\n", 27);
			write(1, destStr1, size);
			write(1, "\n", 1);
			write(1, destStr2, size);
			test = 0;
			break;
		}
		i++;
	}
	if (test == 1)
	{
		write(1, "ft_memcpy -> test1 : ok!\n", 25);
	}
	char srcStr2[] = "on change une partie";
	size = (int)strlen(srcStr2);
	memcpy(destStr1, srcStr, (char)size);
	ft_memcpy(destStr2, srcStr, (char)size);
	i = 0;
	while (i < size)
	{
		if (destStr1[i] != destStr2[i])
		{ 
			write(1, "ft_memcpy -> test2 : error\n", 27);
			write(1, destStr1, size);
			write(1, "\n", 1);
			write(1, destStr2, size);
			test = 0;
			break;
		}
		i++;
	}
	if (test == 1)
	{
		write(1, "ft_memcpy -> test2 : ok!\n", 25);
	}
	size = (int)strlen(srcStr2); 
	memcpy(destStr1, "test en direct", (char)size);
	ft_memcpy(destStr2, "test en direct", (char)size);
	i = 0;
	while (i < size)
	{
		if (destStr1[i] != destStr2[i])
		{ 
			write(1, "ft_memcpy -> test2 : error\n", 27);
			write(1, destStr1, size);
			write(1, "\n", 1);
			write(1, destStr2, size);
			test = 0;
			break;
		}
		i++;
	}
	if (test == 1)
	{
		write(1, "ft_memcpy -> test3 : ok!\n", 25);
	}

	int srcTab[] = {0,1,2,3,4,5,6,7,8,9};
	int destTab1[] = {0,0,0,0,0,0,0,0,0,0};
	int destTab2[] = {42,42,42,42,42,42,42,42,42,42};
	char	c;
	size = 10;
	memcpy(destTab1, srcTab, sizeof(int) * 10);
	ft_memcpy(destTab2, srcTab,sizeof(int) * 10);
	i = 0;
	while (i < 10)
	{
		if (destTab1[i] != destTab2[i])
		{  
			write(1, "ft_memcpy -> test4 : error\n", 27);
			i = 0;
			while(i < 10)
			{
				c = destTab1[i++] + 48;
				write(1, &c, 1);
				write(1, ",", 1);
			}
			write(1, "\n", 1);
			i = 0;
			while(i < 10)
			{
				c = destTab2[i++] + 48;
				write(1, &c, 1);
				write(1, ",", 1);
			}
			test = 0;
			break;
		}
		i++;
	}
	if (test == 1)
	{
		write(1, "ft_memcpy -> test4 : ok!\n", 25);
	}
	char *testNull = (char *)ft_memcpy((void *)0, (void *)0, 3);
	if (testNull != NULL)
		write(1, "ft_memcpy -> test5 : error\n", 27);
	else
	{
		write(1, "ft_memcpy -> test5 : ok!", 25);
	}
	free(destStr1);
	free(destStr2);
	free(testNull);
	return (test);
}
