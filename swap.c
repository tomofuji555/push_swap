/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tofujiwa <tofujiwa@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 19:20:24 by tofujiwa          #+#    #+#             */
/*   Updated: 2023/08/16 19:20:24 by tofujiwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_list **stack)
{
	t_list	*first;
	t_list	*second;
	t_list	*third;

	if (*stack == NULL || (*stack)->next == NULL)
		return ;
	first = *stack;
	second = first->next;
	third = second->next;
	second->next = first;
	first->next = third;
	*stack = second;
}

void	sa(t_list **stack_a)
{
	if (*stack_a == NULL || (*stack_a)->next == NULL)
		return ;
	swap(stack_a);
	write(1, "sa\n", 3);
}

void	sb(t_list **stack_b)
{
	if (*stack_b == NULL || (*stack_b)->next == NULL)
		return ;
	swap(stack_b);
	write(1, "sb\n", 3);
}

void	ss(t_list **stack_a, t_list **stack_b)
{
	if (*stack_a == NULL || (*stack_a)->next == NULL)
		return ;
	if (*stack_b == NULL || (*stack_b)->next == NULL)
		return ;
	swap(stack_b);
	swap(stack_b);
	write(1, "ss\n", 3);
}
