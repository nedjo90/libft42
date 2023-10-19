/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 12:47:41 by nhan              #+#    #+#             */
/*   Updated: 2023/10/19 13:40:45 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <unistd.h>
#include <limits.h>

//test
int	test_isalpha(void);
int	test_isdigit(void);
int	test_isalnum(void);
int	test_isascii(void);
int	test_isprint(void);
int	test_strlen(void);
int	test_memset(void);
int	test_bzero(void);
int	test_memcpy(void);
int	test_memmove(void);
int	test_strlcpy(void);
int	test_strlcat(void);


//fonction
int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
size_t	ft_strlen(const char *s);
void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n); 
void	*ft_memmove(void *dst, const void *src, size_t len);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);

int	main(void)
{
	test_isalpha();
	write(1, "\n*******************************\n", 33);
	test_isdigit();
	write(1, "\n*******************************\n", 33);
	test_isalnum();
	write(1, "\n*******************************\n", 33);
	test_isascii();
	write(1, "\n*******************************\n", 33);
	test_isprint();
	write(1, "\n*******************************\n", 33);
	test_strlen();
	write(1, "\n*******************************\n", 33);
	test_memset();
	write(1, "\n*******************************\n", 33);
	test_bzero();
	write(1, "\n*******************************\n", 33);
	test_memcpy();
	write(1, "\n*******************************\n", 33);
	test_memmove();
	write(1, "\n*******************************\n", 33);
	test_strlcpy();
	write(1, "\n*******************************\n", 33);
	test_strlcat();
	write(1, "\n*******************************\n", 33);

}

int	test_isalpha(void)
{
	int		c;
	char	*str;

	c = 0;
	str = (char *) malloc (128 * sizeof(char));
	while (c < 128)
	{
		str[c] = c;
		if (isalpha(str[c]) != ft_isalpha(str[c]))
		{
			write(1, &str[c], 1);
			write(1, "ft_isalpha : error", 18);
			free(str);
			return (0);
		}
		c++;
	}
	write(1, "ft_isalpha : ok!", 16);
	free(str);
	return (1);
}

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	return (0);
}

int	test_isdigit(void)
{
	int		c;
	char	*str;

	c = 0;
	str = (char *) malloc (128 * sizeof (char));
	while (c < 128)
	{
		str[c] = c;
		if (isdigit(str[c]) != ft_isdigit(str[c]))
		{
			write(1, &str[c], 1);
			write(1, "ft_isdigit : error", 18);
			free(str);
			return (0);
		}
		c++;
	}
	write(1, "ft_isdigit : ok!", 16);
	free(str);
	return (1);
}

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}

int	test_isalnum(void)
{
	int		c;
	char	*str;

	c = 0;
	str = (char *) malloc (128 * sizeof (char));
	while (c < 128)
	{
		str[c] = c;
		if (isdigit(str[c]) != ft_isdigit(str[c]))
		{
			write(1, &str[c], 1);
			write(1, "ft_isalnum : error", 18);
			free(str);
			return (0);
		}
		c++;
	}
	write(1, "ft_isalnum : ok!", 16);
	free(str);
	return (1);
}

int	ft_isalnum(int c)
{
	if (ft_isdigit(c) != 0 || ft_isalpha(c) != 0)
	{
		return (1);
	}
	return (0);
}

int	test_isascii(void)
{
	int		c;
	char	*str;

	c = 0;
	str = (char *) malloc (256 * sizeof (char));
	while (c < 256)
	{
		str[c] = c;
		if (isascii(str[c]) != ft_isascii(str[c]))
		{
			write(1, &str[c], 1);
			write(1, "ft_isascii : error", 18);
			free(str);
			return (0);
		}
		c++;
	}
	write(1, "ft_isascii : ok!", 16);
	free(str);
	return (1);
}

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	return (0);
}

int	test_isprint(void)
{
	int		c;
	char	*str;

	c = 0;
	str = (char *) malloc (256 * sizeof (char));
	while (c < 256)
	{
		str[c] = c;
		if (isprint(str[c]) != ft_isprint(str[c]))
		{
			write(1, &str[c], 1);
			write(1, "ft_isprint : error", 18);
			free(str);
			return (0);
		}
		c++;
	}
	write(1, "ft_isprint : ok!", 16);
	free(str);
	return (1);
}

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	return (0);
}

int	test_strlen(void)
{
	int	test;

	test = 1;
	//test1
	if (strlen("coucou ") != ft_strlen("coucou "))
	{
		write(1, "ft_strlen -> test1 : error\n", 27);
		test = 0;
	}
	else{
		write(1, "ft_strlen -> test1 : ok!\n", 25);
	}
	//test2
	if (strlen("\v\f\r\t\n  seafhlasehflulj") != ft_strlen("\v\f\r\t\n  seafhlasehflulj"))
	{
		write(1, "ft_strlen -> test2 : error\n", 27);
		test = 0;
	}
	else{
		write(1, "ft_strlen -> test2 : ok!\n", 25);
	}
	//test3
	if (strlen("") != ft_strlen(""))
	{
		write(1, "ft_strlen -> test3 : error\n", 27);
		test = 0;
	}
	else{
		write(1, "ft_strlen -> test3 : ok!", 24);
	}
	return (test);
}

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != 0){
		i++;
	}
	return (i);
}

int	test_memset(void)
{
	int	test;
	int	i;

	i = 0;
	test = 1;
	char str[] = "il y a des points au debut";
	char str2[] = "il y a des points au debut";
	char *testStr = (char *)memset(str, '.', sizeof(char) * 4);
	char *testStr2 = (char *)ft_memset(str2, '.', sizeof(char) * 4);
	if (strcmp(testStr, testStr2) != 0)
	{
		write(1, "ft_memset -> test1 : error\n", 27);
		test = 0;
	}
	while (str[i])
	{
		if (testStr[i] != testStr2[i])
		{
			write(1, "ft_memset -> test1 : error\n", 27);
			write(1, testStr, strlen(testStr));
			write(1, "\n", 1);
			write(1, testStr2, strlen(testStr2));
			write(1, "\n", 1);
			test = 0;
			break;
		}
		i++;
	}
	if (test == 1)
	{
		write(1, "ft_memset -> test1 : ok!\n", 25);
	}
	
	i = 0;
	int tab[] = {0,1,2,3,4,5,6,7,8,9};
	int tab2[] = {0,1,2,3,4,5,6,7,8,9};
	int *testTab = memset(tab, -1, sizeof(int) * 4);
	int *testTab2 = ft_memset(tab2, -1, sizeof(int) * 4);

	while (i < 10)
	{
		if (testTab[i] != testTab2[i])
		{
			write(1, "ft_memset -> test2 : error\n", 27);
			int	j;
			char	c;
			j = 0;
			while(j < 10){
				c = testTab[j] + 48;
				write(1, &c, 1);
				j++;
			}
			write(1, "\n", 1);
			j = 0;
			while(j < 10){
				c = testTab2[j] + 48;
				write(1, &c, 1);
				j++;
			}
			test = 0;
			break;
		}
		i++;
	}
	if (test == 1)
	{
		write(1, "ft_memset -> test2 : ok!\n", 25);
	}

	testTab = memset(tab, 0, sizeof(int) * 4);
	testTab2 = ft_memset(tab2, 0, sizeof(int) * 4);

	while (i < 10)
	{
		if (testTab[i] != testTab2[i])
		{
			write(1, "ft_memset -> test3 : error\n", 27);
			int	j;
			char	c;
			j = 0;
			while(j < 10){
				c = testTab[j] + 48;
				write(1, &c, 1);
				j++;
			}
			write(1, "\n", 1);
			j = 0;
			while(j < 10){
				c = testTab2[j] + 48;
				write(1, &c, 1);
				j++;
			}
			test = 0;
			break;
		}
		i++;
	}
	if (test == 1)
	{
		write(1, "ft_memset -> test3 : ok!\n", 25);
	}
	
	testTab = memset(tab + 4, -2147483648, sizeof(int) * 4);
	testTab2 = ft_memset(tab2 + 4, -2147483648, sizeof(int) * 4);

	while (i < 10)
	{
		if (testTab[i] != testTab2[i])
		{
			write(1, "ft_memset -> test4 : error\n", 27);
			int	j;
			char	c;
			j = 0;
			while(j < 10){
				c = testTab[j] + 48;
				write(1, &c, 1);
				j++;
			}
			write(1, "\n", 1);
			j = 0;
			while(j < 10){
				c = testTab2[j] + 48;
				write(1, &c, 1);
				j++;
			}
			test = 0;
			break;
		}
		i++;
	}
	if (test == 1)
	{
		write(1, "ft_memset -> test4 : ok!", 25);
	}
	return (test);
}

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	//write(1, (char *)b, strlen((char *)b)); 
	while(i < len)
	{
		*(char *)(b + i) = c;
		i++;
	}
	//write(1, (char *)b, strlen((char *)b)); 
	return (b);
}

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

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while(i < n)
	{
		*(char *)(s + i) = 0;
		i++;
	}
}

int	test_memcpy(void)
{
	char	srcStr[] = "je fais le teste de la copie";
	char	*destStr1;
	char	*destStr2;
	int	size;
	int	i;
	int	test;

	test = 1;
	size = strlen(srcStr) + 1;
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
	size = strlen(srcStr2); 
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
	size = strlen(srcStr2); 
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
	return (test);
}

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	if(dst == NULL && src == NULL)
		return (NULL);
	i = 0;
	while(i < n)
	{
		*(char *)(dst + i) = *(char *)(src + i);
		i++;
	}
	return (dst);
}

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

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if(dst == src)
		return (dst);
	else if(dst > src && dst <= src + len)
	{
		int i = len - 1;
		while(i >= 0)
		{
			*(char *)(dst + i) = *(char *)(src + i);
			i--;
		}
	}
	else
	{
		memcpy(dst, src, len);
	}
	return (dst);
}

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
		write(1, "ft_strclpy -> test1 : ok!\n", 26);
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
		write(1, "ft_strclpy -> test2 : ok!\n", 26);
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
		write(1, "ft_strclpy -> test3 : ok!\n", 26);
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
		write(1, "ft_strclpy -> test4 : ok!\n", 26);
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
		write(1, "ft_strclpy -> test5 : ok!\n", 26);
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
	 	write(1, "ft_strclpy -> test6 : ok!\n", 26);
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
	 	write(1, "ft_strclpy -> test6 : ok!\n", 26);
	}
	return (1);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	size;

	i = 0;
	size = ft_strlen(src);
	if (dstsize == 0)
		return (size);
	while(i < dstsize - 1 && dstsize != 0 && src[i])
	{
		dst[i] = src[i];
		i++;
	} 
	if (dstsize !=  0)
		dst[i] = '\0';

	return (size);
}


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
	char src2[14] = "vbdfkjbvdskjfv";
	char dst3[30] = "coucou";
	char dst4[30] = "coucou";

	lib = strlcat(dst1, src1, 14);
	ft = ft_strlcat(dst2, src1, 14);
	while(dst1[i] && dst2[i])
	{
		//if(dst1[i] != dst2[i] && lib != ft)
		if(i == 0)
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
	return (test);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	total_len;
	size_t	i;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	total_len = dst_len + src_len;
	i = 0;
	if (dstsize == 0 || dstsize <= dst_len)
		return (src_len + dstsize);
	while(src[i] && dst_len < dstsize - 1)
	{
		dst[dst_len] = src[i];
		dst_len++;
		i++;
	}
	if (dstsize != 0)
		dst[dst_len] = '\0';
	
	return (total_len);
}
