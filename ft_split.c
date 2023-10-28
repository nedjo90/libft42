/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 19:35:00 by nhan              #+#    #+#             */
/*   Updated: 2023/10/28 11:18:49 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_free_tab(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (NULL);
}

char	*ft_strndup(const char *s1, size_t n)
{
	char	*copy;

	if (n > ft_strlen(s1))
		n = ft_strlen(s1);
	copy = (char *) malloc((n) * sizeof(char));
	copy[--n] = '\0';
	while ((int)n >= 0)
	{
		copy[n] = s1[n];
		n--;
	}
	return (copy);
}

int	ft_count_word(char const *s, char c)
{
	int	i;
	int	count;
	int	tracker;

	i = 0;
	count = 0;
	tracker = 0;
	if (*s == 0)
		return (0);
	while (s[i] != '\0')
	{
		if (s[i] == c)
			tracker = 0;
		else if (s[i] != c && tracker == 0)
		{
			count++;
			tracker = 1;
		}
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**tab_str;
	int		i;
	int		j;
	int		k;

	if (!s)
		return (0);
	i = 0;
	j = -1;
	tab_str = (char **) malloc((ft_count_word(s, c) + 1) * sizeof(char *));
	//char *temp = ft_itoa( ft_count_word(s, c));
	//write(1, temp, ft_strlen(temp));
	if (!tab_str)
		return (0);
	while (++j < ft_count_word(s, c))
	{
		while (s[i] == c && s[i])
			i++;
		k = i;
		while (s[i] != '\0' && s[i] != c)
			i++;
		tab_str[j] = ft_substr(s, k, i - k);
		if (j == ft_count_word(s, c))
			break;
		if (!tab_str[j])
			return (ft_free_tab(tab_str));
	}
	tab_str[j] = NULL;
	return (tab_str);
}
