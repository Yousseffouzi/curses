CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
SRCS =  ft_putchar.c ft_putstr.c ft_putnbr.c 
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
