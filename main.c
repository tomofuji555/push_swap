/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tofujiwa <tofujiwa@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 19:18:59 by tofujiwa          #+#    #+#             */
/*   Updated: 2023/08/16 19:18:59 by tofujiwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_stack(t_list **stack)
{
	t_list	*current;
	t_list	*next;

	if (stack && *stack)
	{
		current = *stack;
		while (current)
		{
			next = current->next;
			free(current);
			current = next;
		}
		*stack = NULL;
	}
}

int	main(int argc, char **argv)
{
	t_list	*head_a;
	t_list	*head_b;
	int		size;
	int		*array;
	int		*new_array;

	head_a = NULL;
	head_b = NULL;
	size = 0;
	array = check_param (argc, argv, &size);
	new_array = coord_comp (array, &size);
	make_stack (&head_a, new_array, &size);
	free (new_array);
	push_swap (&head_a, &head_b, &size);
	free_stack(&head_a);
	return (0);
}
