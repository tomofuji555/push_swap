/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tofujiwa <tofujiwa@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 19:19:29 by tofujiwa          #+#    #+#             */
/*   Updated: 2023/08/16 19:19:29 by tofujiwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_3(t_list **stack)
{
	if ((*stack)->num > (*stack)->next->num 
		&& (*stack)->next->num > (*stack)->next->next->num)
	{
		sa(stack);
		rra(stack);
	}
	if ((*stack)->num > (*stack)->next->num
		&& (*stack)->num < (*stack)->next->next->num)
		sa(stack);
	if ((*stack)->num < (*stack)->next->next->num
		&& (*stack)->next->num > (*stack)->next->next->num)
	{
		sa(stack);
		ra(stack);
	}
	if ((*stack)->num > (*stack)->next->num 
		&& (*stack)->next->num < (*stack)->next->next->num)
		ra(stack);
	if ((*stack)->num < (*stack)->next->num 
		&& (*stack)->num > (*stack)->next->next->num)
		rra(stack);
}

void	sort_4(t_list **head_a, t_list **head_b)
{
	if ((*head_a)->num == 0)
		pb(head_a, head_b);
	else if ((*head_a)->next->num == 0)
	{
		sa(head_a);
		pb(head_a, head_b);
	}
	else if ((*head_a)->next->next->num == 0)
	{
		rra(head_a);
		rra(head_a);
		pb(head_a, head_b);
	}
	else
	{
		rra(head_a);
		pb(head_a, head_b);
	}
	sort_3(head_a);
	pa(head_b, head_a);
}

void	sort_5(t_list **head_a, t_list **head_b)
{
	while ((*head_a)->num != 0 && (*head_a)->num != 1)
		rra(head_a);
	pb(head_a, head_b);
	while ((*head_a)->num != 0 && (*head_a)->num != 1)
		rra(head_a);
	pb(head_a, head_b);
	sort_3(head_a);
	if ((*head_b)->num < (*head_b)->next->num)
		sb(head_b);
	pa(head_b, head_a);
	pa(head_b, head_a);
}

void	sort_6(t_list **head_a, t_list **head_b)
{
	while ((*head_a)->num != 0)
		rra(head_a);
	pb(head_a, head_b);
	while ((*head_a)->num != 1)
		rra(head_a);
	pb(head_a, head_b);
	while ((*head_a)->num != 2)
		rra(head_a);
	pb(head_a, head_b);
	sort_3(head_a);
	pa(head_b, head_a);
	pa(head_b, head_a);
	pa(head_b, head_a);
}

void	less_than_6(t_list **head_a, t_list **head_b, int size)
{
	if (size == 2)
	{
		if ((*head_a)->num > (*head_a)->next->num)
			sa(head_a);
	}
	else if (size == 3)
		sort_3(head_a);
	else if (size == 4)
		sort_4(head_a, head_b);
	else if (size == 5)
		sort_5(head_a, head_b);
	else if (size == 6)
		sort_6(head_a, head_b);
}
