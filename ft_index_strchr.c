/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_index_strchr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 21:04:54 by nhan              #+#    #+#             */
/*   Updated: 2023/10/25 11:31:15 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ************************************************************************** */
/* Cherche la première occurence de c dans la chaine de caractère s           */
/* Retourne un int représentant le premier caractère c dans la chaine         */
/* s'il le trouve sinon retourne NULL                                         */
/* ************************************************************************** */

int	ft_index_strchr(char const *s, char c)
{
	int	index;

	index = 0;
	while (*(s + index) != '\0')
	{
		if (*(s + index) == c)
			return (index);
		index++;
	}
	return (index);
}
