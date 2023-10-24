/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 09:32:19 by nhan              #+#    #+#             */
/*   Updated: 2023/10/24 13:43:07 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if (count == 0 || size == 0)
		return (ft_calloc(1, 1));
	else if ((count < 0 && size < 0) \
		|| count >= INT_MAX || size >= INT_MAX)
		return (NULL);
	ptr = (void *) malloc(size * count);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, count);
	return (ptr);
}
