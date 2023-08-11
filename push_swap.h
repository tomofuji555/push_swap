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

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <limits.h>
# include <stdlib.h>

typedef struct s_list{
	int				num;
	struct s_list	*next;
}	t_list;

int		*check_param(int argc, char **argv, int *size);
int		ft_strlen(char *str);
void	ft_putstr_fd(char *s, int fd);
void	print_error(void *content);
char	*str_copy(int argc, char *argv);
char	**more_two(int argc, char **argv);
char	**argv_process(int argc, char **argv);
int		*array_num(int argc, char **argv, int *size);
long	argv_size(int argc, char **argv);
void	free_aft_argv(char **aft_argv);
void	free_aft_argv_exit(char **aft_argv);
void	free_exit(void *content);
void	double_free(void *a, void *b);
int		not_num(int argc, char **argv, int *size);
int		check_dup(int *array, int *size);
int		ft_atoi(char *str, char **argv, int *array);
void	ft_lstadd_back(t_list **lst, t_list *new);
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstnew(int num);
char	**ft_split(char const *s, char c);
int		*order_array(int *array, int *size);
void	*ft_memcpy(void *dest, const void *src, size_t n);
int		*compare_array(int *ord_array, int *array, int *size);
int		is_order(int *array, int *size);
int		*coord_comp(int *array, int *size);
void	make_stack(t_list **head_a, int *array, int *size);
void	rotate(t_list **stack);
void	ra(t_list **stack_a);
void	rb(t_list **stack_b);
void	rr(t_list **stack_a, t_list **stack_b);
void	swap(t_list **stack);
void	sa(t_list **stack_a);
void	sb(t_list **stack_b);
void	ss(t_list **stack_a, t_list **stack_b);
void	reverse(t_list **stack);
void	rra(t_list **stack_a);
void	rrb(t_list **stack_b);
void	rrr(t_list **stack_a, t_list **stack_b);
void	push(t_list **from, t_list **to);
void	pb(t_list **stack_a, t_list **stack_b);
void	pa(t_list **stack_b, t_list **stack_a);
void	swap_3(t_list **stack);
void	swap_4(t_list **head_a, t_list **head_b);
void	swap_5(t_list **head_a, t_list **head_b);
void	swap_6(t_list **head_a, t_list **head_b);
void	less_than_6(t_list **head_a, t_list **head_b, int size);
int		where_is_max(t_list **stack, int max);
void	push_a_to_b(t_list **head_a, t_list **head_b, int piv, int n);
void	max_push(t_list **head_a, t_list **head_b, int max);
void	push_swap(t_list **head_a, t_list **head_b, int *size);
void	free_stack(t_list **head_a);

#endif