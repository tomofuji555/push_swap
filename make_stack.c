/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tofujiwa <tofujiwa@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 19:19:10 by tofujiwa          #+#    #+#             */
/*   Updated: 2023/08/16 19:19:10 by tofujiwa         ###   ########.fr       */
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
		if (node == NULL)
			free_exit (array);
		ft_lstadd_back (head_a, node);
		i++;
	}
	return ;
}
