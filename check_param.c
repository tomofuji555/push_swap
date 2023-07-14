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
	char **aft_argv;
	int	i;
	int	j;

	i = 1;
	j = 0;
	aft_argv = (char **)malloc(sizeof(char *) * (argc));
	while (j < argc - 1)
	{
		aft_argv[j] = str_copy(argc, argv[i]);
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
			exit (1);  //処理追加で必要？
	}
	else
	{
		// *argv++;
		// aft_argv = argv;
		aft_argv = more_two (argc, argv);
	}
	return (aft_argv);
}

// void    make_node(int argc, char **argv, t_list **a)
// {
//     int  i;
//     t_list  *new;
//     int     num;

//     i = 1;
//     while (argv[i])
//     {
//         num = ft_atoi (argv[i]);
//         if (num == -1) //num > int_max || num < int_min
//             return (-1);
//         new = ft_lstnew (&num);
//         if (!new)
//         {
//             free (new);
//         }
//         ft_lstadd_back (a, new);
//         i++;
//     }
//     if (i == 1) //aft_argv=1 error
//         exit (0);
// }

int *array_num(int argc, char **argv, int *size)
{
	int	i;
	int	j;
	int		*array;

	i = 0;
	j = 0;
	array = (int *)malloc(sizeof (int) * (*size));
	while (i < *size && argc)
	{
		array[j] = ft_atoi (argv[i]);
		i++;
		j++;
	}
	// array[j] = '\0';
	return (array);
}

long	argv_size (int argc, char **argv)
{
	long size;
	int	i;
	int	j;

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

	if (argc <= 1)  //empty_param(argc, argv)
		exit (1);
	aft_argv = argv_process (argc, argv);
	temp = argv_size (argc, aft_argv);
	// printf ("temp = %ld\n", temp);
	if (temp > INT_MAX)
		exit (1);
	*size = temp;
	if (not_num (argc, aft_argv, size))
		print_error ();
	array = array_num (argc, aft_argv, size);
	if (check_dup(array, size))
		print_error ();
	free (aft_argv);
	return (array);
}
