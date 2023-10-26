/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_putchar_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 10:25:34 by nhan              #+#    #+#             */
/*   Updated: 2023/10/26 11:14:09 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_test_putchar_fd(char *t, char c)
{
	int file = open("fichier_test", O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file == -1)
	{
		write(1, "ft_putchar_fd -> ", 17);
		write(1, t, ft_strlen(t));
		write(1, " : error!\n", 10);
		write(1, "Erreur lors de l'ouverture\n", 27);
		return (0);
	}
	ft_putchar_fd(c, file);
	lseek(file, 0, SEEK_SET);
	char check_c;
	int read_char = read(file, &check_c, 1);
	if (read_char == -1)
	{
		write(1, "ft_putchar_fd -> ", 17);
		write(1, t, ft_strlen(t));
		write(1, " : error!\n", 10);
		write(1, "Erreur lors de la lecture\n", 26);
		close(file);
		return (0);
	}
	if (check_c == c)
	{
		write(1, "ft_putchar_fd -> ", 17);
		write(1, t, ft_strlen(t));
		write(1, " : ok!", 7);
		close(file);
		return (1);
	}
	else
	{
		write(1, "ft_putchar_fd -> ", 17);
		write(1, t, ft_strlen(t));
		write(1, " : error!\n", 10);
		write(1, "Sent in file :", 14);
		write(1, &check_c, 1);
		write(1, "\nExpected :", 11);
		write(1, &c, 1);		
		close(file);
		return (0);
	}
}

int	test_putchar_fd(void)
{
	int	test = 1;

	test = ft_test_putchar_fd("test1", 'a');
	write(1, "\n", 1);
	test = ft_test_putchar_fd("test2", '5');
	write(1, "\n", 1);
	test = ft_test_putchar_fd("test3", '\t');
	write(1, "\n", 1);
	test = ft_test_putchar_fd("test4", '\v');
	write(1, "\n", 1);
	test = ft_test_putchar_fd("test5", '?');
	write(1, "\n", 1);
	test = ft_test_putchar_fd("test6", '\'');


	return (test);
}
