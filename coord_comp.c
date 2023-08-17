/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   coord_comp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tofujiwa <tofujiwa@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 19:17:38 by tofujiwa          #+#    #+#             */
/*   Updated: 2023/08/16 19:17:38 by tofujiwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*order_array(int *array, int *size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < *size - 1)
	{
		j = i + 1;
		while (j < *size)
		{
			if (array[i] > array[j])
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
			j++;
		}
		i++;
	}
	return (array);
}

int	*compare_array(int *ord_array, int *array, int *size)
{
	int	*rt;
	int	i;
	int	j;

	i = 0;
	rt = (int *)malloc(sizeof(int) * (*size));
	if (!rt)
	{
		double_free (array, ord_array);
		exit (1);
	}
	while (i < *size)
	{
		j = 0;
		while (j < *size)
		{
			if (array[i] == ord_array[j])
				rt[i] = j;
			j++;
		}
		i++;
	}
	double_free (ord_array, array);
	return (rt);
}

int	is_order(int *array, int *size)
{
	int	i;
	int	j;

	i = 0;
	while (i < *size - 1)
	{
		j = i + 1;
		while (j < *size)
		{
			if (array[i] > array[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	*coord_comp(int *array, int *size)
{
	int	*cp_array;
	int	*ord_array;
	int	*rt;

	cp_array = (int *)malloc(sizeof(int) * (*size));
	ft_memcpy(cp_array, array, sizeof(int) * (*size));
	ord_array = order_array (cp_array, size);
	rt = compare_array (ord_array, array, size);
	if (!is_order(rt, size))
		free_exit (rt);
	return (rt);
}
