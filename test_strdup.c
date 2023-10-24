/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strdup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 14:10:14 by nhan              #+#    #+#             */
/*   Updated: 2023/10/24 14:23:55 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


int test_strdup(void)
{
	int	test = 1;

	//test1
	char s1[] = "dflkjnsvfnvdcoucouc   ks,vddpqos\r,n\vpqdf,vpq,v\nsqdvlkqdsklnv\t";
	char *d1 = ft_strdup(s1);
	char *d2 = strdup(s1);
	if (strcmp(d1, d2) != 0)
	{
		write(1, "ft_strdup -> test1 : error!\n", 29);
		test = 0;	
	}
	else
	{	
		write(1, "ft_strdup -> test1 : ok!\n", 25);
	}
	
	//test2
	char s2[] = "";
	d1 = ft_strdup(s2);
	d2 = strdup(s2);
	if (strcmp(d1, d2) != 0)
	{
		write(1, "ft_strdup -> test2 : error!\n", 29);
		test = 0;	
	}
	else
	{	
		write(1, "ft_strdup -> test2 : ok!\n", 25);
	}

	//test3
	d1 = ft_strdup("\t\n\v\f\r");
	d2 = strdup("\t\n\v\f\r");
	if (strcmp(d1, d2) != 0)
	{
		write(1, "ft_strdup -> test3 : error!", 28);
		test = 0;	
	}
	else
	{	
		write(1, "ft_strdup -> test2 : ok!", 24);
	}
	return (test);
}
