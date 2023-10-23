/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strncmp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 15:22:50 by nhan              #+#    #+#             */
/*   Updated: 2023/10/23 22:56:42 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	test_strncmp(void)
{
	char	s1[] = "kjdfghvmsiudfbviuqdbvmi";
	char	s2[] ="kjdfghvmsiudfbviuqdbvmi"; 
	int	test = 1;
	
	if (ft_strncmp(s1,s2,0) != strncmp(s1,s2,0))
	{
		printf("%d - %d", ft_strncmp(s1,s2,0), strncmp(s1,s2,0));
		write(1,"ft_strncmp -> test1 : error!\n", 29);
		test = 0;
	}
	else
	{
		write(1,"ft_strncmp -> test1 : ok!\n", 26);
	}
	if (ft_strncmp(s1,s2,strlen(s1)) != strncmp(s1,s2,strlen(s2)))
	{
		write(1,"ft_strncmp -> test2 : error!\n", 29);
		test = 0;
	}
	else
	{
		write(1,"ft_strncmp -> test2 : ok!\n", 26);
	}
	if (ft_strncmp(s1,s2,5) != strncmp(s1,s2,5))
	{
		write(1,"ft_strncmp -> test3 : error!\n", 29);
		test = 0;
	}
	else
	{
		write(1,"ft_strncmp -> test3 : ok!\n", 26);
	}
	if (ft_strncmp(s1,s2,strlen(s1) + 10) != strncmp(s1,s2,strlen(s1) + 10))
	{
		write(1,"ft_strncmp -> test4 : error!\n", 29);
		test = 0;
	}
	else
	{
		write(1,"ft_strncmp -> test4 : ok!\n", 26);
	}

	char	s3[] = "kjdfghvmsiufbviuqdbvmi";
	char	s4[] ="kjdfghvmsiudfbviuqdbvmi"; 
	
	if (ft_strncmp(s3,s4,0) != strncmp(s3,s4,0))
	{
		printf("%d - %d", ft_strncmp(s3,s4,0), strncmp(s3,s4,0));
		write(1,"ft_strncmp -> test5 : error!\n", 29);
		test = 0;
	}
	else
	{
		write(1,"ft_strncmp -> test5 : ok!\n", 26);
	}
	if (ft_strncmp(s3,s4,strlen(s3)) != strncmp(s3,s4,strlen(s4)))
	{
		write(1,"ft_strncmp -> test6 : error!\n", 29);
		test = 0;
	}
	else
	{
		write(1,"ft_strncmp -> test6 : ok!\n", 26);
	}
	if (ft_strncmp(s3,s4,5) != strncmp(s3,s4,5))
	{
		write(1,"ft_strncmp -> test7 : error!\n", 29);
		test = 0;
	}
	else
	{
		write(1,"ft_strncmp -> test7 : ok!\n", 26);
	}
	if (ft_strncmp(s3,s4,strlen(s3) + 10) != strncmp(s3,s4,strlen(s3) + 10))
	{
		write(1,"ft_strncmp -> test8 : error!\n", 29);
		test = 0;
	}
	else
	{
		write(1,"ft_strncmp -> test8 : ok!\n", 26);
	}


	char	s5[] = "kjdfghvmsiufbviuqdbvmi";
	char	 s6[] ="kjdfgiudfbviuqdbvmi"; 
	
	if (ft_strncmp(s5,s6,0) != strncmp(s5,s6,0))
	{
		printf("%d - %d", ft_strncmp(s5,s6,0), strncmp(s5,s6,0));
		write(1,"ft_strncmp -> test9 : error!\n", 29);
		test = 0;
	}
	else
	{
		write(1,"ft_strncmp -> test9 : ok!\n", 26);
	}
	if (ft_strncmp(s5,s6,strlen(s5)) != strncmp(s5,s6,strlen(s6)))
	{
		write(1,"ft_strncmp -> test10 : error!\n", 30);
		test = 0;
	}
	else
	{
		write(1,"ft_strncmp -> test10 : ok!\n", 27);
	}
	if (ft_strncmp(s5,s6,5) != strncmp(s5,s6,5))
	{
		write(1,"ft_strncmp -> test10 : error!\n", 30);
		test = 0;
	}
	else
	{
		write(1,"ft_strncmp -> test11 : ok!\n", 27);
	}
	if (ft_strncmp(s5,s6,strlen(s5) + 10) != strncmp(s5,s6,strlen(s5) + 10))
	{
		write(1,"ft_strncmp -> test12 : error!\n", 30);
		test = 0;
	}
	else
	{
		write(1,"ft_strncmp -> test12 : ok!", 26);
	}

	return (test);
}
