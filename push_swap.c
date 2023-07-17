/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 16:36:20 by marvin            #+#    #+#             */
/*   Updated: 2023/07/15 16:36:20 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_3(t_list **stack)
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

void	swap_4(t_list **head_a, t_list **head_b)
{
	if ((*head_a)->num == 0)
		pb(head_a, head_b);
	else if ((*head_a)->next->num == 0)
	{
		swap(head_a);
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
	swap_3(head_a);
	pa(head_b, head_a);
}

void	swap_5(t_list **head_a, t_list **head_b)
{
	while ((*head_a)->num != 0 && (*head_a)->num != 1)
		rra(head_a);
	pb(head_a, head_b);
	while ((*head_a)->num != 0 && (*head_a)->num != 1)
		rra(head_a);
	pb(head_a, head_b);
	swap_3(head_a);
	if ((*head_b)->num < (*head_b)->next->num)
			sa(head_b);
	pa(head_b, head_a);
	pa(head_b, head_a);
}

// void	swap_6(t_list **head_a, t_list **head_b, int *size)
// {
// 	// t_list	*current;
// 	// int		i;

// 	// current = *head_a;
// 	// i = 0;
// 	if (*size == 6)
// 	{

// 	}
// }

// void	m_push_swap

void	**push_swap(t_list **head_a, t_list **head_b, int *size)
{
	if (*size <= 2)
	{
		if ((*head_a)->num > (*head_a)->next->num)
			sa(head_a);
	}
	if (*size == 3)
		swap_3(head_a);
	if (*size == 4)
		swap_4(head_a, head_b);
	if (*size == 5)
		swap_5(head_a, head_b);
	// if (*size == 6)
	// 	swap_6(head_a, head_b, size);
	// if (*size >= 6)
	// 	m_push_swap(head_a, head_b);

    // ra(head_a);
    // sa(head_a);
    // rra(head_a);
    // pb(head_a, head_b);
    // pb(head_a, head_b);
    // pb(head_a, head_b);
    // pb(head_a, head_b);
    // rb(head_b);
    // pa(head_b, head_a);
    // return(head_a);
}