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

int	where_is_max(t_list **stack, int max)
{
	int		i;
	t_list	*node;

	i = 0;
	node = *stack;
	while (node)
	{
		if (node->num == max)
			break ;
		node = node->next;
		i++;
	}
	if (i == 0)
		return (0);
	return (i + 1);
}

void	push_a_to_b(t_list **head_a, t_list **head_b, int piv, int n)
{
	int	i;
	int	c1;
	int	c2;

	c1 = n / 2;
	c2 = c1 + 1;
	while (c1 > 0 && c2 < n)
	{
		i = 0;
		while (i < piv * 2)
		{
			if ((*head_a)->num >= (c1 - 1) * piv && (*head_a)->num < c2 * piv)
			{
				pb(head_a, head_b);
				if ((*head_b)->num < (c1 * piv))
					rb(head_b);
				i++;
			}
			else
				ra(head_a);
		}
		c1--;
		c2++;
	}
}

void	max_push(t_list **head_a, t_list **head_b, int max)
{
	int	front;
	int	back;

	while (max > 0)
	{
		if ((*head_b)->num == max)
		{
			pa(head_b, head_a);
			max--;
		}
		else
		{
			front = where_is_max(head_b, max);
			back = max - front;
			if (front < back)
				rb(head_b);
			else
				rrb(head_b);
		}
	}
	pa(head_b, head_a);
}

void	push_swap(t_list **head_a, t_list **head_b, int *size)
{
	int	n;
	int	piv;

	if (*size <= 6)
		less_than_6(head_a, head_b, *size);
	else if (*size > 6)
	{
		if (*size <= 150)
			n = 9;
		if (*size > 150)
			n = 17;
		piv = (*size) / n;
		push_a_to_b (head_a, head_b, piv, n);
		while ((*head_a)->next)
			pb(head_a, head_b);
		pb(head_a, head_b);
		max_push(head_a, head_b, (*size - 1));
	}
	return ;
}
