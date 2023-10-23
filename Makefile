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
LIB=libft.a

all: $(LIB)

$(LIB): $(OBJ)
	$(AR) $@ $^

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(LIB)

re: fclean $(LIB)
