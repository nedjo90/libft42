/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_putnbr_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 10:25:34 by nhan              #+#    #+#             */
/*   Updated: 2023/10/26 13:02:27 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_test_putnbr_fd(char *t, int n, char *exp)
{
	int file = open("fichier_test", O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file == -1)
	{
		write(1, "ft_putnbr_fd -> ", 17);
		write(1, t, ft_strlen(t));
		write(1, " : error!\n", 10);
		write(1, "Erreur lors de l'ouverture\n", 27);
		return (0);
	}
	ft_putnbr_fd(n, file);
	lseek(file, 0, SEEK_SET);
	size_t size = 100;
	char *check_str = (char *) malloc((size + 1) * sizeof(char));
	int read_char = read(file, check_str, size);
	if (read_char == -1)
	{
		write(1, "ft_putnbr_fd -> ", 17);
		write(1, t, ft_strlen(t));
		write(1, " : error!\n", 10);
		write(1, "Erreur lors de la lecture\n", 26);
		close(file);
		return (0);
	}
	check_str[read_char] = '\0';
	if (strcmp(check_str, exp) == 0)
	{
		write(1, "ft_putnbr_fd -> ", 17);
		write(1, t, ft_strlen(t));
		write(1, " : ok!", 7);
		free(check_str);
		close(file);
		return (1);
	}
	else
	{
		write(1, "ft_putnbr_fd -> ", 17);
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

int	test_putnbr_fd(void)
{
	int	test = 1;


	test = ft_test_putnbr_fd("test1", 1, "1");
        write(1, "\n", 1);
        test = ft_test_putnbr_fd("test2", -1, "-1");
        write(1, "\n", 1);
        test = ft_test_putnbr_fd("test3", INT_MIN, "-2147483648");
        write(1, "\n", 1);
        test = ft_test_putnbr_fd("test4", INT_MAX, "2147483647");
        write(1, "\n", 1);
        test = ft_test_putnbr_fd("test5", 0, "0");
        write(1, "\n", 1);
        test = ft_test_putnbr_fd("test6", 452232, "452232");
        write(1, "\n", 1);
        test = ft_test_putnbr_fd("test7", -452232, "-452232");
        write(1, "\n", 1);
        test = ft_test_putnbr_fd("test8", -404, "-404");
        write(1, "\n", 1);
        test = ft_test_putnbr_fd("test9", 80, "80");

	return (test);
}
