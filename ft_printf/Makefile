CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
SRCS =  ft_putchar.c ft_putstr.c ft_putnbr.c ft_printf.c ft_puthex.c \
	ft_puthex_upper.c ft_putunsigned.c ft_printaddress.c
OBJS = $(SRCS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	ar rsc $(NAME) $(OBJS)

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re
