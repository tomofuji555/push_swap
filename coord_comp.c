/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   coord_comp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 18:37:39 by marvin            #+#    #+#             */
/*   Updated: 2023/06/30 18:37:39 by marvin           ###   ########.fr       */
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

// int	*copy_array(int *array, int *size)
// {
// 	int	i;
// 	int	*cp_array;

// 	i = 0;
// 	cp_array = (int *)malloc(sizeof(int) * (*size));
// 	while (i < *size)
// 	{
// 		cp_array[i] = array[i];
// 		i++;
// 	}
// 	return (cp_array);
// }

int	*compare_array(int *ord_array, int *array, int *size)
{
	int	*rt;
	int	i;
	int	j;

	i = 0;
	rt = (int *)malloc(sizeof(int) * (*size));
	if (!rt)
		exit (1);
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
	free (ord_array);
	free (array);
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

	if (*size == 1)
		exit (1);
	cp_array = (int *)malloc(sizeof(int) * (*size));
	ft_memcpy(cp_array, array, sizeof(int) * (*size));
	ord_array = order_array (cp_array, size);
	rt = compare_array (ord_array, array, size);
	if (!rt)
		exit (1);
	if (!is_order(rt, size))
	{
		free (rt);
		exit(1);
	}
	return (rt);
}
