/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 01:13:58 by marvin            #+#    #+#             */
/*   Updated: 2023/07/15 01:13:58 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	make_stack(t_list **head_a, int *array, int *size)
{
	t_list	*node;
	int		i;

	i = 0;
	while (i < *size)
	{
		node = ft_lstnew (array[i]);
		ft_lstadd_back (head_a, node);
		i++;
	}
	return ;
}
