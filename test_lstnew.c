/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstnew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 13:38:24 by nhan              #+#    #+#             */
/*   Updated: 2023/10/26 15:36:19 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_test_lstnew(char *t,void *cont, t_list *exp)
{
	t_list	*create_lst = ft_lstnew(cont);
	
	write(1, t, ft_strlen(t));

	if (create_lst->content == exp->content)
	{
		
		write(1, ft_itoa(*(int *)create_lst->content), 	ft_strlen(create_lst->content));
		if (strcmp(ft_itoa(*(int *)cont), exp->content) == 0)
		{
			write(1, ft_itoa(*(int *)create_lst->content), 	ft_strlen(create_lst->content));
		}
		else
		{
			write(1, create_lst->content, ft_strlen(create_lst->content));
			write(1,"\n", 1);
			write(1, exp->content, ft_strlen(exp->content));
		}
		write(1," ok", 3);
		return (1);
	}
	else
	{
		write(1, " error", 6);
		return (0);
	}
}

int	test_lstnew(void)
{
	int	test = 1;
	t_list	exp_lst;
	exp_lst.next = NULL;


	//test1
	int n = 15;
	exp_lst.content = &n;
	test = ft_test_lstnew("test1", &n, &exp_lst);
	write(1, "\n", 1);
	char s[] = "test une str";
	exp_lst.content = s;
	test = ft_test_lstnew("test2", s, &exp_lst); 
	
	return (test);
}
