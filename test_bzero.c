/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_bzero.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 13:56:55 by nhan              #+#    #+#             */
/*   Updated: 2023/10/23 09:49:19 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	test_bzero(void)
{
	int	test;
	int	i;

	test = 1;
	i = 0;

	char str[] = "je fais un premier test\n";
	char str2[] = "je fais un premier test\n";
	bzero(str + 4, sizeof(char) * 4);
	bzero(str2 + 4, sizeof(char) * 4);
	i = strlen(str) - 1;
	while (i >= 0)
	{
		if(str[i] != str2[i])
		{
			write(1, "ft_bzero -> test1 : error\n", 26);
			write(1, str, strlen(str));
			write(1, str2, strlen(str));
			test = 0;
			break;
		}
		i--;
	}
	if (test == 1)
	{
		write(1, "ft_bzero -> test1 : ok!\n", 25);
	}

	int tab[] = {0,1,2,3,4,5,6,7,8,9};
	int tab2[] = {0,1,2,3,4,5,6,7,8,9};
	bzero(tab + 4, sizeof(int) * 4);
	bzero(tab2 + 4, sizeof(int) * 4);
	i = 0;
	while (i >= 0)
	{
		if(tab[i] != tab2[i])
		{
			write(1, "ft_bzero -> test2 : error\n", 26);
			char c;
			
			i = 0;
			while(i < 10)
			{
				c = tab[i] + 48;
				write(1, &c, 1);
				write(1, ",", 1);
				i++;
			}
			write(1, "\n", 1);
			i = 0;	
			while(i < 10)
			{
				c = tab2[i] + 48;
				write(1, &c, 1);
				write(1, ",", 1);
				i++;
			}
			test = 0;
			break;
		}
		i--;
	}
	if (test == 1)
	{
		write(1, "ft_bzero -> test2 : ok!\n", 25);

	}
	int tab3[] = {0,0,0,0,0,0,0,0,0,0};
	int tab4[] = {0,0,0,0,0,0,0,0,0,0};
	bzero(tab3 + 4, sizeof(int) * 4);
	bzero(tab4 + 4, sizeof(int) * 4);
	i = 0;
	while (i >= 0)
	{
		if(tab3[i] != tab4[i])
		{
			write(1, "ft_bzero -> test3 : error\n", 26);
			char c;
			
			i = 0;
			while(i < 10)
			{
				c = tab3[i] + 48;
				write(1, &c, 1);
				write(1, ",", 1);
				i++;
			}
			write(1, "\n", 1);
			i = 0;	
			while(i < 10)
			{
				c = tab4[i] + 48;
				write(1, &c, 1);
				write(1, ",", 1);
				i++;
			}
			test = 0;
			break;
		}
		i--;
	}
	if (test == 1)
	{
		write(1, "ft_bzero -> test3 : ok!", 24);

	}
	return (test);
}
