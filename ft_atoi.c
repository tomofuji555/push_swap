/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tofujiwa <tofujiwa@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 19:17:55 by tofujiwa          #+#    #+#             */
/*   Updated: 2023/08/16 19:17:55 by tofujiwa         ###   ########.fr       */
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

int	ft_atoi(char *str, char **argv, int *array, int size)
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
	if (rt < INT_MIN || rt > INT_MAX
		|| ((rt < INT_MIN || rt > INT_MAX) && size <= 1))
		free_atoi(argv, array);
	return (rt);
}
