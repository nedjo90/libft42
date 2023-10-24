/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_substr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:30:18 by nhan              #+#    #+#             */
/*   Updated: 2023/10/24 16:41:24 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	test_substr(void)
{
	int	test = 1;

	//test1
	char s1[] = "je fais un test et ça commence ici et tu me mets la suite";
	char *d1 = ft_substr(s1, 32, 26);
	if (strcmp(d1, "ici et tu me mets la suite") == 0)
	{
		write(1, "ft_substr -> test1 : ok!\n", 25);
	}
	else
	{
		write(1, "ft_substr -> test1 : error!\n", 28);
		test = 0;
	}

	//test2
	char s2[] = "";
	d1 = ft_substr(s2, 32, 26);
	if (strcmp(d1, "") == 0)
	{
		write(1, "ft_substr -> test2 : ok!\n", 25);
	}
	else
	{
		printf("%s", d1);
		write(1, "ft_substr -> test2 : error!\n", 28);
		test = 0;
	}
	
	//test3
	d1 = ft_substr(s1, 0, 0);
	if (strcmp(d1, "") == 0)
	{
		write(1, "ft_substr -> test3 : ok!\n", 25);
	}
	else
	{
		write(1, "ft_substr -> test3 : error!\n", 28);
		test = 0;
	}

	//test4
	d1 = ft_substr(s1, -1, 0);
	if (strcmp(d1, "") == 0)
	{
		write(1, "ft_substr -> test4 : ok!\n", 25);
	}
	else
	{
		write(1, "ft_substr -> test4 : error!\n", 28);
		test = 0;
	}
	printf("%s", d1);
	
	//test5
	d1 = ft_substr(s1, 0, ft_strlen(s1));

	if (strcmp(d1, s1) == 0)
	{
		write(1, "ft_substr -> test5 : ok!\n", 25);
	}
	else
	{
		write(1, "ft_substr -> test5 : error!\n", 28);
		test = 0;
	}

	//test6
	d1 = ft_substr(s1, -1, -1);
	if (strcmp(d1, "") == 0)
	{
		write(1, "ft_substr -> test6 : ok!\n", 25);
	}
	else
	{
		write(1, "ft_substr -> test6 : error!\n", 28);
		test = 0;
	}

	//test7
	d1 = ft_substr(s1, 0, -1);
	if (strcmp(s1,d1) == 0)
	{
		write(1, "ft_substr -> test7 : ok!\n", 25);
	}
	else
	{
		write(1, "ft_substr -> test7 : error!\n", 28);
		test = 0;
	}

	//test8
	char *s3 = NULL;
	d1 = ft_substr(s3, 1, 1);
	if (d1 == NULL)
	{
		write(1, "ft_substr -> test8 : ok!", 24);
	}
	else
	{
		write(1, "ft_substr -> test8 : error!", 27);
		test = 0;
	}
	return (test);
}
