/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 16:06:41 by marvin            #+#    #+#             */
/*   Updated: 2023/07/15 16:06:41 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    swap(t_list **stack)
{
    t_list  *first;
    t_list  *second;
    t_list  *third;

    if (*stack == NULL || (*stack)->next == NULL)
        return ;
    // second = first;
    // first = third;
    // *stack = second;
    first = *stack;
    second = first->next;
    third = second->next;

    second->next = first;
    first->next = third;
    *stack = second;
}

void    sa(t_list **stack_a)
{
    swap(stack_a);
    write(1, "sa\n", 3);
}

void    sb(t_list **stack_b)
{
    swap(stack_b);
    write(1, "sb\n", 3);
}

void    ss(t_list **stack_a, t_list **stack_b)
{
    swap(stack_b);
    swap(stack_b);
    write(1, "ss\n", 3);
}