/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 14:21:47 by nhan              #+#    #+#             */
/*   Updated: 2023/10/25 20:10:12 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <ctype.h>
# include <unistd.h>
# include <limits.h>

//structure
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
/*



*/
//PART1
//test
int			test_isalpha(void);
int			test_isdigit(void);
int			test_isalnum(void);
int			test_isascii(void);
int			test_isprint(void);
int			test_strlen(void);
int			test_memset(void);
int			test_bzero(void);
int			test_memcpy(void);
int			test_memmove(void);
int			test_strlcpy(void);
int			test_strlcat(void);
int			test_toupper(void);
int			test_tolower(void);
int			test_strchr(void);
int			test_strrchr(void);
int			test_strncmp(void);
int			test_memchr(void);
int			test_memcmp(void);
int			test_strnstr(void);
int			test_atoi(void);
int			test_calloc(void);
int			test_strdup(void);
//fonction
char		*ft_strchr(const char *s, int c);
char		*ft_strrchr(const char *s, int c);
char		*ft_strnstr(const char *haystack, const char *needle, size_t len);
char		*ft_strdup(const char *s1);
int			ft_isalpha(int c);
int			ft_isdigit(int c);
int			ft_isalnum(int c);
int			ft_isascii(int c);
int			ft_isprint(int c);
int			ft_atoi(const char *str);
int			ft_toupper(int c);
int			ft_tolower(int c);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
size_t		ft_strlen(const char *s);
size_t		ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t		ft_strlcat(char *dst, const char *src, size_t dstsize);
void		*ft_memset(void *b, int c, size_t len);
void		ft_bzero(void *s, size_t n);
void		*ft_memcpy(void *dst, const void *src, size_t n);
void		*ft_memmove(void *dst, const void *src, size_t len);
void		*ft_memchr(const void *s, int c, size_t n);
void		*ft_calloc(size_t count, size_t size);
/*



*/
//PART2
//test
int			test_substr(void);
int			test_strjoin(void);
int			test_strtrim(void);
int			test_split(void);
int			test_itoa(void);
int			test_strmapi(void);
int			test_striteri(void);
int			test_putchar_fd(void);
int			test_putstr_fd(void);
int			test_putendl_fd(void);
int			test_putnbr_fd(void);
int			test_itoa(void);
//fonction
char		*ft_substr(char const *s, unsigned int start, size_t len);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strtrim(char const *s1, char const *set);
char		**ft_split(char const *s, char c);
char		*ft_itoa(int n);
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char		*ft_itoa(int n);
void		*ft_striteri(char *s, void (*f)(unsigned int, char *));
void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(char *s, int fd);
void		ft_putendl_fd(char *s, int fd);
void		ft_putnbr_fd(int n, int fd);
/*



*/
//BONUS
//test
int			test_lstnew(void);
int			test_lstadd_front(void);
int			test_lstsize(void);
int			test_lstlast(void);
int			test_lstadd_back(void);
int			test_lstdelone(void);
int			test_lstclear(void);
//function
t_list		*ft_lstnew(void *content);
void		ft_lstadd_front(t_list **lst, t_list *new);
int			ft_lstsize(t_list *lst);
t_list		*ft_lstlast(t_list *lst);
void		ft_lstadd_back(t_list **lst, t_list *new);
void		ft_lstdelone(t_list *lst, void (*del)(void *));
void		ft_lstclear(t_list **lst, void (*del)(void *));
/*



*/
//PERSO
//test
int			test_isspace(void);
//fonction
int			ft_isspace(int c);
int			ft_char_in_str(char const *str, char c);
int			ft_count_char_in_str(char *str, char c);
int			ft_index_strchr(char const *s, char c);
#endif
