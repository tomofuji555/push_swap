/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tofujiwa <tofujiwa@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 19:20:18 by tofujiwa          #+#    #+#             */
/*   Updated: 2023/08/16 19:20:18 by tofujiwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_list **stack)
{
	t_list	*first;
	t_list	*last;

	if ((*stack)->next == NULL || *stack == NULL)
		return ;
	first = *stack;
	last = ft_lstlast (*stack);
	last->next = first;
	*stack = first->next;
	first->next = NULL;
}

void	ra(t_list **stack_a)
{
	if ((*stack_a)->next == NULL || *stack_a == NULL)
		return ;
	rotate(stack_a);
	write(1, "ra\n", 3);
}

void	rb(t_list **stack_b)
{
	if ((*stack_b)->next == NULL || *stack_b == NULL)
		return ;
	rotate(stack_b);
	write(1, "rb\n", 3);
}

void	rr(t_list **stack_a, t_list **stack_b)
{
	if ((*stack_a)->next == NULL || *stack_a == NULL)
		return ;
	if ((*stack_b)->next == NULL || *stack_b == NULL)
		return ;
	rotate(stack_a);
	rotate(stack_b);
	write(1, "rr\n", 3);
}
