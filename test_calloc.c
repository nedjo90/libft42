/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_calloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 09:48:09 by nhan              #+#    #+#             */
/*   Updated: 2023/10/24 19:25:17 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	test_calloc(void)
{
	int test = 1;

	//test1
	int *tab1;
	int *tab2;
	
	tab1 = (int *) ft_calloc(10, sizeof(int));
	tab2 = (int *) calloc(10, sizeof(int));
	if ((tab1 == NULL && tab2 == NULL) || memcmp(tab1, tab2, sizeof(int)) == 0)
		write(1, "ft_calloc -> test1 : ok!\n", 25);
	else
	{	
		write(1, "ft_calloc -> test1 : error!\n", 29);
		test = 0;	
	}

	//test2
	int *tab3;
	int *tab4;
	
	tab3 = (int *) ft_calloc(10, 0);
	tab4 = (int *) calloc(10, 0);
	if ((tab3 == NULL && tab4 == NULL) || memcmp(tab3, tab4, 0) == 0)
		write(1, "ft_calloc -> test2 : ok!\n", 25);
	else
	{
		write(1, "ft_calloc -> test2 : error!\n", 29);
		test = 0;	
	}

	//test3
	int *tab5;
	int *tab6;
	
	tab5 = (int *) ft_calloc(0, 10);
	tab6 = (int *) calloc(0, 10);
	if ((tab5 == NULL && tab6 == NULL) || memcmp(tab5, tab6, 10) == 0)
		write(1, "ft_calloc -> test3 : ok!\n", 25);
	else
	{
		write(1, "ft_calloc -> test3 : error!\n", 29);
		test = 0;	
	}
	
	//test4
	int *tab7;
	int *tab8;
	
	tab7 = (int *) ft_calloc(-10, 0);
	tab8 = (int *) calloc(-10, 0);
	if ((tab7 == NULL && tab8 == NULL) || memcmp(tab7, tab8, 0) == 0)
		write(1, "ft_calloc -> test4 : ok!\n", 25);
	else
	{
		write(1, "ft_calloc -> test4 : error!\n", 29);
		test = 0;	
	}

	//test5
	int *tab9;
	int *tab10;
	
	tab9 = (int *) ft_calloc(0, -10);
	tab10 = (int *) calloc(0, -10);
	if ((tab10 == NULL && tab9 == NULL) || memcmp(tab9, tab10, 1) == 0)
		write(1, "ft_calloc -> test5 : ok!\n", 25);
	else
	{
		printf("%d -> %d === %d", *tab9, *tab10, memcmp(tab9, tab10, -10));
		write(1, "ft_calloc -> test5 : error!\n", 29);
		test = 0;	
	}

	//test6
	int *tab11;
	int *tab12;
	
	tab11 = (int *) ft_calloc(INT_MAX, INT_MAX);
	tab12 = (int *) calloc(INT_MAX, INT_MAX);
	if ((tab11 == NULL && tab11 == NULL) || memcmp(tab11, tab12, INT_MAX) == 0)
		write(1, "ft_calloc -> test6 : ok!\n", 25);
	else
	{
		write(1, "ft_calloc -> test6 : error!\n", 29);
		test = 0;	
	}

	//test7
	int *tab13;
	int *tab14;
	
	tab13 = (int *) ft_calloc(INT_MAX, 0);
	tab14 = (int *) calloc(INT_MAX, 0);
	if ((tab13 == NULL && tab14 == NULL) || memcmp(tab13, tab14, 1) == 0)
		write(1, "ft_calloc -> test7 : ok!\n", 25);
	else
	{
		write(1, "ft_calloc -> test7 : error!\n", 29);
		test = 0;	
	}
	
	//test8
	int *tab15;
	int *tab16;
	
	tab15 = (int *) ft_calloc(0, INT_MAX);
	tab16 = (int *) calloc(0, INT_MAX);
	if ((tab15 == NULL && tab16 == NULL) || memcmp(tab15, tab16, 1) == 0)
		write(1, "ft_calloc -> test8 : ok!\n", 25);
	else
	{
		write(1, "ft_calloc -> test8 : error!\n", 29);
		test = 0;	
	}

	//test9
	int *tab17;
	int *tab18;
	
	tab17 = (int *) ft_calloc(INT_MAX,-10);
	tab18 = (int *) calloc(INT_MAX,-10);
	if ((tab17 == NULL && tab18 == NULL) || memcmp(tab17, tab18, 1) == 0)
		write(1, "ft_calloc -> test9 : ok!\n", 25);
	else
	{
		write(1, "ft_calloc -> test10 : error!\n", 29);
		test = 0;	
	}
	
	//test8
	int *tab19;
	int *tab20;
	
	tab19 = (int *) ft_calloc(-10, INT_MAX);
	tab20 = (int *) calloc(-10, INT_MAX);
	if ((tab19 == NULL && tab20 == NULL) || memcmp(tab19, tab20, 1) == 0)
		write(1, "ft_calloc -> test10 : ok!\n", 26);
	else
	{
		write(1, "ft_calloc -> test10 : error!\n", 30);
		test = 0;	
	}

	//test9
	int *tab21;
	int *tab22;
	
	tab21 = (int *) ft_calloc(1, 1);
	tab22 = (int *) calloc(1, 1);
	if ((tab21 == NULL && tab22 == NULL) || memcmp(tab21, tab22, 1) == 0)
		write(1, "ft_calloc -> test11 : ok!\n", 26);
	else
	{
		write(1, "ft_calloc -> test11 : error!\n", 30);
		test = 0;	
	
	}
	
	//test9
	int *tab23;
	int *tab24;
	
	tab23 = (int *) ft_calloc(0, 0);
	tab24 = (int *) calloc(0, 0);
	if ((tab23 == NULL && tab24 == NULL) || memcmp(tab23, tab24, 1) == 0)
		write(1, "ft_calloc -> test12 : ok!", 25);
	else
	{
		write(1, "ft_calloc -> test11 : error!", 29);
		test = 0;	
	}
	return (test);
}
