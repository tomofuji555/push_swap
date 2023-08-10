/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 18:19:17 by marvin            #+#    #+#             */
/*   Updated: 2023/08/09 18:19:17 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_error(void *content)
{
	if (content)
	{
		free(content);
		ft_putstr_fd("Error\n", 2);
	}
	else
		ft_putstr_fd("Error\n", 2);
	exit (1);
}

void	double_free(void *a, void *b)
{
	if (a)
		free (a);
	if (b)
		free (b);
}

void	free_exit(void *content)
{
	free (content);
	exit (1);
}

void	free_aft_argv(char **aft_argv)
{
	size_t	i;

	i = 0;
	while (aft_argv[i])
	{
		free (aft_argv[i]);
		aft_argv[i] = NULL;
		i++;
	}
	free (aft_argv);
}
