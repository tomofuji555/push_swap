/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 20:24:00 by marvin            #+#    #+#             */
/*   Updated: 2023/06/26 20:24:00 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PUSH_SWAP
# define PUSH_SWAP

typedef int data_t;

# include   <stdio.h>
# include	<limits.h>

typedef struct s_list{
	void			*content;
    int				index;
    int				size;
    struct  s_list	*next;
} t_list;

int	*check_param(int argc, char **argv, int *size);


# endif