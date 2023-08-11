/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 14:31:07 by marvin            #+#    #+#             */
/*   Updated: 2023/06/25 14:31:07 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	st_isspace(char *str, size_t *pi)
{
	size_t	i;
	int		sign;

	i = 0;
	sign = 1;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\r'
		|| str[i] == '\v' || str[i] == '\f')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-' && (str[i + 1] >= '0' || str[i + 1] <= '9'))
			sign *= -1;
		if (str[i] == '-' && (str[i + 1] < '0' || str[i + 1] > '9'))
			sign = 0;
		if (str[i] == '+' && (str[i + 1] < '0' || str[i + 1] > '9'))
			sign = 0;
		i++;
	}
	*pi = i;
	return (sign);
}

static void	free_atoi(char **argv, int *array)
{
	free_aft_argv (argv);
	free (array);
	ft_putstr_fd ("Error\n", 2);
	exit (1);
}

int	ft_atoi(char *str, char **argv, int *array)
{
	size_t	i;
	size_t	pi;
	long	num;
	long	rt;
	int		sign;

	sign = st_isspace(str, &pi);
	if (sign == 0)
		free_atoi(argv, array);
	i = pi;
	num = 0;
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + str[i] - '0';
		i++;
	}
	rt = num * sign;
	if (rt < INT_MIN || rt > INT_MAX)
	{
		free_aft_argv (argv);
		print_error (array);
	}
	return (rt);
}
