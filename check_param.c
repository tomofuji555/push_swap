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
	printf ("Error\n");
	exit (1);
}

char	**argv_process(int argc, char **argv)
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
	return (aft_argv);
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

int *array_num(int argc, char **argv, int *size)
{
	size_t	i;
	size_t	j;
	int		*array;
	int		num;

	i = 1;
	j = 0;
	array = (int *)malloc(sizeof (int) * (*size));
	while (i <= *size)
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
	size_t	i;
	size_t	j;

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
				size++;
			}
			i++;
		}
		return (size);
	}
	else
		return (argc -1);
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
	if (temp > INT_MAX)
		exit (1);
	*size = temp;
	if (not_num (argc, argv))
		print_error ();
	array = array_num (argc, aft_argv, size);
	// make_comp();
	// make_node (argc, , a);
	if (check_dup(array, size))
		print_error ();
	return (array);
}
