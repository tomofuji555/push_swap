# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tofujiwa <tofujiwa@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/16 19:19:19 by tofujiwa          #+#    #+#              #
#    Updated: 2023/08/16 19:19:19 by tofujiwa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC   = cc
CFLAGS = -Wall -Wextra -Werror
SRCS = check_param_utils.c \
       check_param.c \
	   coord_comp.c \
	   ft_atoi.c \
	   ft_lstadd_back.c \
	   ft_lstlast.c \
	   ft_lstnew.c \
	   ft_split.c \
	   ft_memcpy.c \
	   ft_putstr_fd.c \
	   main.c \
	   make_stack.c \
	   reverse.c \
	   rotate.c \
	   swap.c \
	   push.c \
	   push_swap.c \
	   push_swap_utils.c \
	   free.c \

OBJS := $(SRCS:.c=.o)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME) 

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY:	all clean fclean re


