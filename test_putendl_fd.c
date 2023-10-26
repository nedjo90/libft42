/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_putendl_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 10:25:34 by nhan              #+#    #+#             */
/*   Updated: 2023/10/26 12:44:18 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_test_putendl_fd(char *t, char *s, char *exp)
{
	int file = open("fichier_test", O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file == -1)
	{
		write(1, "ft_putendl_fd -> ", 17);
		write(1, t, ft_strlen(t));
		write(1, " : error!\n", 10);
		write(1, "Erreur lors de l'ouverture\n", 27);
		return (0);
	}
	ft_putendl_fd(s, file);
	size_t size = ft_strlen(s) + 1;
	lseek(file, 0, SEEK_SET);
	char *check_str = (char *) malloc((size + 1) * sizeof(char));
	int read_char = read(file, check_str, size);
	if (read_char == -1)
	{
		write(1, "ft_putendl_fd -> ", 17);
		write(1, t, ft_strlen(t));
		write(1, " : error!\n", 10);
		write(1, "Erreur lors de la lecture\n", 26);
		close(file);
		return (0);
	}
	check_str[read_char] = '\0';
	if (strcmp(check_str, exp) == 0)
	{
		write(1, "ft_putendl_fd -> ", 17);
		write(1, t, ft_strlen(t));
		write(1, " : ok!", 7);
		free(check_str);
		close(file);
		return (1);
	}
	else
	{
		write(1, "ft_putendl_fd -> ", 17);
		write(1, t, ft_strlen(t));
		write(1, " : error!\n", 10);
		write(1, "Sent in file :", 14);
		write(1, check_str, ft_strlen(check_str));
		write(1, "\nExpected :", 11);
		write(1, exp, ft_strlen(exp));
		free(check_str);
		close(file);
		return (0);
	}
}

int	test_putendl_fd(void)
{
	int	test = 1;

	test = ft_test_putendl_fd("test1", "testtest", "testtest\n");
	write(1, "\n", 1);
	test = ft_test_putendl_fd("test2", "\n\t\v\r\f", "\n\t\v\r\f\n");
	write(1, "\n", 1);
	test = ft_test_putendl_fd("test3", "test\t      avec \f des choses \r\%\%\'\'bizarre", "test\t      avec \f des choses \r\%\%\'\'bizarre\n");
	write(1, "\n", 1);
	test = ft_test_putendl_fd("test4", "\v", "\v\n");
	write(1, "\n", 1);
	test = ft_test_putendl_fd("test5", "?", "?\n");
	write(1, "\n", 1);
	test = ft_test_putendl_fd("test6", "\'", "\'\n");


	return (test);
}
