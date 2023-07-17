# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/12 17:59:28 by marvin            #+#    #+#              #
#    Updated: 2023/07/12 17:59:28 by marvin           ###   ########.fr        #
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
	   ft_memset.c \
	   ft_split.c \
	   main.c \
	   make_stack.c \
	   revesrse.c \
	   rotate.c \
	   swap.c \
	   push.c \
	   push_swap.c \
OBJS = ${SRCS:.c=.o}


