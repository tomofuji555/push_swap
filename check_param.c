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

void	print_error(void)
{
	ft_printf ("Error\n");
	exit (1);
}

char	**argv__process(int argc, char **argv)
{
	char	**aft_argv;
	size_t	i;
	size_t	j;

	i = 0;
	if (argc == 2)
	{
		aft_argv = ft_split(argv[1], ' ');
		if (!aft_argv)
			exit (1);  //処理追加で必要？
	}
	else
		aft_argv = argv;
	retrun (aft_argv);
}

// void    make_node(int argc, char **argv, t_list **a)
// {
//     size_t  i;
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

int *array_num(int argc, char **argv)
{
	size_t	i;
	size_t	j;
	int		*array;
	int		num;

	i = 1;
	j = 0;
	while (argv[i])
	{
		array[j] = ft_atoi (argv[i]);
		if (array[j] == -1)
			exit (1);
		i++;
		j++;
	}
	array[j] = '\0';
	return (array);
}

int	*check_param(int argc, char **argv)
{
	char	**aft_argv;
	int		**comp;
	int		*array;

	if (argc <= 1)  //empty_param(argc, argv)
		exit (1);
	aft_argv = argv_process(argc, argv);
	if (not_num (argc, argv))
		print_error ();
	array = array_num (argc, aft_argv);
	// make_comp();
	// make_node (argc, , a);
	// if (check_dup(argc, aft_argv, *a))
	// 	print_error ();
	return (array);
}
