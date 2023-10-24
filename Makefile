SRCS=ft_bzero.c \
ft_isalnum.c \
ft_isalpha.c \
ft_isascii.c \
ft_isdigit.c \
ft_isprint.c \
ft_memcpy.c \
ft_memmove.c \
ft_memset.c \
ft_strlcat.c \
ft_strlcpy.c \
ft_strlen.c \
ft_toupper.c \
ft_tolower.c \
ft_strchr.c \
ft_strrchr.c \
ft_strncmp.c \
ft_memchr.c \
ft_memcmp.c \
ft_strnstr.c \
ft_atoi.c \
ft_isspace.c \
ft_calloc.c \
ft_strdup.c \
ft_substr.c \
ft_strjoin.c \
ft_strtrim.c \
test_strtrim.c \
test_strjoin.c \
test_substr.c \
test_strdup.c \
test_calloc.c \
test_isspace.c \
test_atoi.c \
test_strnstr.c \
test_memcmp.c \
test_memchr.c \
test_strncmp.c \
test_strrchr.c \
test_strchr.c \
test_toupper.c \
test_tolower.c \
test_bzero.c \
test_isalnum.c \
test_isalpha.c \
test_isascii.c \
test_isdigit.c \
test_isprint.c \
test_memcpy.c \
test_memmove.c \
test_memset.c \
test_strlcat.c \
test_strlcpy.c \
test_strlen.c \

CC=gcc
CFLAGS =-Wall -Wextra -Werror 
OBJ=$(SRCS:.c=.o)
AR=ar rcs
RM=rm -rf
SCRIPT=./a.out
NORM=norminette
NAME=libft.a

all: $(NORM) $(NAME)
	$(CC) $(CFLAGS) main.c $(NAME)
	$(RM) $(OBJ) $(NAME) 
	./a.out

$(NAME): $(OBJ)
	$(AR) $@ $^

$(NORM):
	$@ ft_*.c libft.h

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME) a.out

re: fclean all

.PHONY: all clean fclean re ./a.out main.c
