/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tofujiwa <tofujiwa@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 19:20:05 by tofujiwa          #+#    #+#             */
/*   Updated: 2023/08/16 19:20:05 by tofujiwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_list **from, t_list **to)
{
	t_list	*fr_first;
	t_list	*fr_second;
	t_list	*to_first;

	if (*from == NULL)
		return ;
	fr_first = *from;
	to_first = *to;
	fr_second = fr_first->next;
	*from = fr_second;
	*to = fr_first;
	fr_first->next = to_first;
}

void	pb(t_list **stack_a, t_list **stack_b)
{
	if (*stack_a == NULL)
		return ;
	push (stack_a, stack_b);
	write(1, "pb\n", 3);
}

void	pa(t_list **stack_b, t_list **stack_a)
{
	if (*stack_b == NULL)
		return ;
	push (stack_b, stack_a);
	write (1, "pa\n", 3);
}
