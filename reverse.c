/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 18:31:59 by marvin            #+#    #+#             */
/*   Updated: 2023/07/15 18:31:59 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse(t_list **stack)
{
	t_list	*first;
	t_list	*pre_last;
	t_list	*last;

	if (*stack == NULL || (*stack)->next == NULL)
		return ;
	first = *stack;
	pre_last = *stack;
	last = ft_lstlast(*stack);
	while (pre_last->next != last)
		pre_last = pre_last->next;
	pre_last->next = NULL;
	*stack = last;
	last->next = first;
}

void	rra(t_list **stack_a)
{
	if (*stack_a == NULL || (*stack_a)->next == NULL)
		return ;
	reverse(stack_a);
	write(1, "rra\n", 4);
}

void	rrb(t_list **stack_b)
{
	if (*stack_b == NULL || (*stack_b)->next == NULL)
		return ;
	reverse(stack_b);
	write(1, "rrb\n", 4);
}

void	rrr(t_list **stack_a, t_list **stack_b)
{
	if (*stack_a == NULL || (*stack_a)->next == NULL)
		return ;
	if (*stack_b == NULL || (*stack_b)->next == NULL)
		return ;
	reverse(stack_a);
	reverse(stack_b);
	write(1, "rrr\n", 4);
}
