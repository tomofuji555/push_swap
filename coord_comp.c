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

int *coord_comp (int *array, int *size)
{
    size_t  i;
    size_t  j;
    size_t  count;
    int     *aft_array;

    i = 0;
    count = 0;
    aft_array = (int *) malloc (sizeof (int) * (*size));
    if (!aft_array)
        exit (1);
    while (i < *size - 1)
    {
        j = i + 1;
        while (j < *size)
        {
            if (array[i] < array[j])
                count++;
            j++;
        }
        i++;
    }
}