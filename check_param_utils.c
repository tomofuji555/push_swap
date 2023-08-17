/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_param_utils.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tofujiwa <tofujiwa@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 19:17:23 by tofujiwa          #+#    #+#             */
/*   Updated: 2023/08/16 19:17:23 by tofujiwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_strlen(char *str)
{
	int	i ;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*str_copy(int argc, char *argv)
{
	char	*str;
	int		i;
	int		max;

	i = 0;
	max = ft_strlen (argv);
	str = (char *)malloc(sizeof(char) * (max + 1));
	if (!str)
		return (NULL);
	while (i < max && argc)
	{
		str[i] = argv[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

int	not_num(int argc, char **argv, int *size)
{
	int	i;
	int	j;

	i = 0;
	while (i < *size && argc)
	{
		j = 0;
		while (argv[i][j])
		{
			if (j == 0 && (argv[i][j] == '-' || argv[i][j] == '+'))
				j++;
			else if (argv[i][j] == '-' || argv[i][j] == '+')
				return (1);
			else if (argv[i][j] < '0' || argv[i][j] > '9')
				return (1);
			else
				j++;
		}
		i++;
	}
	return (0);
}

int	check_dup(int *array, int *size)
{
	int	i;
	int	j;

	i = 0;
	while (i < *size - 1)
	{
		j = i + 1;
		while (j < *size)
		{
			if (array[i] == array[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}
