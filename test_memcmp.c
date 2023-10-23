/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 23:19:58 by nhan              #+#    #+#             */
/*   Updated: 2023/10/23 23:41:20 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	test_memcmp(void)
{
	char s1[] = "testtesttest";
	char s2[] = "testtesttest";
	int test = 1;

	//test1
	if(ft_memcmp(s1, s2, 12) != memcmp(s1,s2,12))
	{
		write(1,"ft_memcmp -> test1 : error!\n", 28);
		test = 0;
	}
	else
	{
		write(1, "ft_memcmp -> test1 : ok!\n", 25);
	}


	//test2
	char s3[] = "testtfsttest";
	
	if(ft_memcmp(s1, s3, 12) != memcmp(s1,s3,12))
	{
		write(1,"ft_memcmp -> test2 : error!\n", 28);
		test = 0;
	}
	else
	{
		write(1, "ft_memcmp -> test2 : ok!\n", 25);
	}
	
	//test3
	
	char s4[] = "testtesttes";
	if(ft_memcmp(s1, s4, 12) != memcmp(s1,s4,12))
	{
		write(1,"ft_memcmp -> test3 : error!\n", 28);
		test = 0;
	}
	else
	{
		write(1, "ft_memcmp -> test3 : ok!\n", 25);
	}

	//test4
	if(ft_memcmp(s4, s1, 12) != memcmp(s4,s1,12))
	{
		write(1,"ft_memcmp -> test4 : error!\n", 28);
		test = 0;
	}
	else
	{
		write(1, "ft_memcmp -> test4 : ok!\n", 25);
	}

	//test5
	char s5[] = "testtEsttest";
	
	if(ft_memcmp(s1, s5, 12) != memcmp(s1,s5,12))
	{
		write(1,"ft_memcmp -> test5 : error!\n", 28);
		test = 0;
	}
	else
	{
		write(1, "ft_memcmp -> test5 : ok!\n", 25);
	}

	//test6
	int tab1[] = {0,1,2,3,4,5,6,7,8,9};
	int tab2[] = {0,1,2,3,4,5,6,7,8,9};

	if(ft_memcmp(tab1, tab2, 10) != memcmp(tab1,tab2,10))
	{
		write(1,"ft_memcmp -> test6 : error!\n", 28);
		test = 0;
	}
	else
	{
		write(1, "ft_memcmp -> test6 : ok!\n", 25);
	}

	//test7
	int tab3[] = {0,1,2,3,4,5,6,7,8,9};
	int tab4[] = {0,1,2,10,4,5,6,7,8,9};

	if(ft_memcmp(tab3, tab4, 10) != memcmp(tab3,tab4,10))
	{
		write(1,"ft_memcmp -> test7 : error!\n", 28);
		test = 0;
	}
	else
	{
		write(1, "ft_memcmp -> test7 : ok!\n", 25);
	}
	
	//test8
	if(ft_memcmp(tab3, tab4, 3) != memcmp(tab3,tab4,3))
	{
		write(1,"ft_memcmp -> test8 : error!\n", 28);
		test = 0;
	}
	else
	{
		write(1, "ft_memcmp -> test8 : ok!\n", 25);
	}
	
	//test9
	if(ft_memcmp(tab3, tab4, 4) != memcmp(tab3,tab4,4))
	{
		write(1,"ft_memcmp -> test9 : error!\n", 28);
		test = 0;
	}
	else
	{
		write(1, "ft_memcmp -> test9 : ok!\n", 25);
	}


	//test10
	int tab5[] = {0,1,2,3,4,5,6,7,8,9};
	int tab6[] = {0,1,2,3,4,5,6,7,8};

	if(ft_memcmp(tab5, tab6, 10) != memcmp(tab5,tab6,10))
	{
		write(1,"ft_memcmp -> test10 : error!\n", 28);
		test = 0;
	}
	else
	{
		write(1, "ft_memcmp -> test10 : ok!", 25);
	}
	return (test);

}
