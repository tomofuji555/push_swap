/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_param.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 14:31:29 by marvin            #+#    #+#             */
/*   Updated: 2023/06/25 14:31:29 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**more_two(int argc, char **argv)
{
	char	**aft_argv;
	int		i;
	int		j;

	i = 1;
	j = 0;
	aft_argv = (char **)malloc(sizeof(char *) * (argc));
	if (!aft_argv)
		return (NULL);
	while (j < argc - 1)
	{
		aft_argv[j] = str_copy(argc, argv[i]);
		if (!aft_argv[j])
		{
			free(aft_argv);
			return (NULL);
		}
		i++;
		j++;
	}
	aft_argv[j] = NULL;
	return (aft_argv);
}

char	**argv_process(int argc, char **argv)
{
	char	**aft_argv;

	if (argc == 2)
	{
		aft_argv = ft_split(argv[1], ' ');
		if (!aft_argv)
			exit (1);
	}
	else
	{
		aft_argv = more_two (argc, argv);
		if (!aft_argv)
			exit (1);
	}
	return (aft_argv);
}

int	*array_num(int argc, char **argv, int *size)
{
	int		i;
	int		j;
	int		*array;

	i = 0;
	j = 0;
	array = (int *)malloc(sizeof (int) * (*size));
	if (!array)
	{
		free_aft_argv (argv);
		exit (1);
	}
	while (i < *size && argc)
	{
		array[j] = ft_atoi (argv[i], argv, array);
		i++;
		j++;
	}
	return (array);
}

long	argv_size(int argc, char **argv)
{
	long	size;
	int		i;
	int		j;

	size = 0;
	i = 1;
	if (argc == 2)
	{
		while (argv[i])
		{
			j = 0;
			while (argv[i][j])
			{
				j++;
			}
			i++;
			size++;
		}
		return (size + 1);
	}
	else
		return (argc - 1);
}

int	*check_param(int argc, char **argv, int *size)
{
	char	**aft_argv;
	long	temp;
	int		*array;

	if (argc <= 1)
		exit (1);
	aft_argv = argv_process (argc, argv);
	temp = argv_size (argc, aft_argv);
	if (temp > INT_MAX || temp <= 1)
	{
		free_aft_argv(aft_argv);
		exit (1);
	}
	*size = temp;
	if (not_num (argc, aft_argv, size))
		print_error (NULL);
	array = array_num (argc, aft_argv, size);
	free_aft_argv(aft_argv);
	if (check_dup(array, size))
		print_error (array);
	return (array);
}
