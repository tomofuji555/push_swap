/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 18:16:52 by marvin            #+#    #+#             */
/*   Updated: 2023/06/25 18:16:52 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list *ft_lstnew(void *content)
{
    t_list  *node;
    node = (t_list *)malloc(sizeof(t_list));
    if (node == NULL)
        return (NULL);
    node->content = content;
    node->index = node->index + 1;
    node->next = NULL;
    return (node);
}