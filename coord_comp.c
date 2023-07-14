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

int *order_array(int *array, int *size)
{
    int  i;
    int  j;
    int  temp;

    i = 0;
    if (*size <= 1)
        exit (1);
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

int *copy_array(int *array, int *size)
{
    int  i;
    int     *cp_array;

    i = 0;
    cp_array = (int *)malloc(sizeof(int) * (*size));
    while (i < *size)
    {
        cp_array[i] = array[i];
        i++;
    }
    return (cp_array);
}

int *compare_array (int *ord_array, int *array, int *size)
{
    int  i;
    int  j;

    i = 0;
    while (i < *size)
    {
        j = 0;
        while (j < *size)
        {
            if (array[i] == ord_array[j])
            {
                array[i] = j;
                break;
            }
            j++;
        }
        i++;
    }
    return (array);
}

int *coord_comp(int *array, int *size)
{
    int     *cp_array;
    int     *ord_array;
    int     *rt;

    cp_array = copy_array (array, size);
    ord_array = (int *)malloc(sizeof (int) * (*size));
    if (!ord_array)
    {
        exit (1);
    }
    ord_array = order_array (cp_array, size);
    rt = (int *)malloc(sizeof (int) * (*size));
    if (!rt)
    {
        exit (1);
    }
    rt = compare_array (ord_array, array, size);
    return (rt);
}