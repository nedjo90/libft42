/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 12:47:41 by nhan              #+#    #+#             */
/*   Updated: 2023/10/26 12:58:12 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

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
	test_toupper();
	write(1, "\n*******************************\n", 33);
	test_tolower();
	write(1, "\n*******************************\n", 33);
	test_strchr();
	write(1, "\n*******************************\n", 33);
	test_strrchr();
	write(1, "\n*******************************\n", 33);
	test_strncmp();
	write(1, "\n*******************************\n", 33);
	test_memchr();
	write(1, "\n*******************************\n", 33);
	test_memcmp();
	write(1, "\n*******************************\n", 33);
	test_strnstr();
	write(1, "\n*******************************\n", 33);
	test_isspace();
	write(1, "\n*******************************\n", 33);
	test_atoi();
	write(1, "\n*******************************\n", 33);
	test_calloc();
	write(1, "\n*******************************\n", 33);
	test_strdup();
	write(1, "\n*******************************\n", 33);
	test_substr();
	write(1, "\n*******************************\n", 33);
	test_strjoin();
	write(1, "\n*******************************\n", 33);
	test_strtrim();
	write(1, "\n*******************************\n", 33);
	test_split();
	write(1, "\n*******************************\n", 33);
	test_itoa();
	write(1, "\n*******************************\n", 33);
	test_strmapi();
	write(1, "\n*******************************\n", 33);
	test_striteri();
	write(1, "\n*******************************\n", 33);
	test_putchar_fd();
	write(1, "\n*******************************\n", 33);
	test_putstr_fd();
	write(1, "\n*******************************\n", 33);
	test_putendl_fd();
	write(1, "\n*******************************\n", 33);
	test_putnbr_fd();
	write(1, "\n*******************************\n", 33);

	return (0);
}
