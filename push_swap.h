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
# include   <stdlib.h>

typedef struct s_list{
	void			*content;
    int				index;
    int				size;
    struct  s_list	*next;
} t_list;

int     *check_param(int argc, char **argv, int *size);
void	print_error(void);
char	*str_copy(int argc, char *argv);
char	**more_two(int argc, char **argv);
char	**argv_process(int argc, char **argv);
int     *array_num(int argc, char **argv, int *size);
long	argv_size (int argc, char **argv);
int    not_num(int argc, char **argv, int *size);
int     check_dup(int *array, int *size);
int     ft_atoi(const char *str);
void    ft_lstadd_back(t_list **lst, t_list *new);
t_list  *ft_lstlast(t_list *lst);
t_list  *ft_lstnew(void *content);
void    *ft_memset(void *b, int c, size_t len);
char    **ft_split(char const *s, char c);
int *order_array(int *array, int *size);
int *copy_array(int *array, int *size);
int *compare_array (int *ord_array, int *array, int *size);
int *coord_comp(int *array, int *size);

# endif