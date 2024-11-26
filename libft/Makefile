# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yofouzi <yofouzi@student.1337.ma>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/10 11:15:56 by yofouzi           #+#    #+#              #
#    Updated: 2024/11/16 12:10:14 by yofouzi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	ft_isalpha.c ft_memchr.c ft_putchar_fd.c \
		ft_strlcpy.c ft_strrchr.c ft_strchr.c \
		ft_atoi.c ft_isascii.c ft_memcmp.c ft_itoa.c \
		ft_strdup.c ft_strlen.c ft_putendl_fd.c \
		ft_strtrim.c ft_bzero.c ft_isdigit.c \
		ft_putnbr_fd.c ft_toupper.c ft_memcpy.c \
		ft_striteri.c ft_strmapi.c ft_substr.c \
		ft_isprint.c ft_memmove.c ft_calloc.c \
		ft_putstr_fd.c ft_strjoin.c ft_strncmp.c \
		ft_tolower.c ft_strnstr.c ft_isalnum.c \
		ft_memset.c ft_split.c ft_strlcat.c

SRCS_B = ft_lstnew_bonus.c ft_lstadd_front_bonus.c \
		 ft_lstsize_bonus.c ft_lstlast_bonus.c \
		 ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
		 ft_lstclear_bonus.c ft_lstiter_bonus.c \
		 ft_lstmap_bonus.c

NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
OBJS = $(SRCS:.c=.o)
OBJS_B = $(SRCS_B:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	ar rsc $(NAME) $(OBJS)

bonus : $(OBJS_B)
	ar rsc $(NAME) $(OBJS_B)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -f $(OBJS) $(OBJS_B)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re bonus
