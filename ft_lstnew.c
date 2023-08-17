/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tofujiwa <tofujiwa@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 19:18:20 by tofujiwa          #+#    #+#             */
/*   Updated: 2023/08/16 19:18:20 by tofujiwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_lstnew(int num)
{
	t_list	*node;

	node = (t_list *) malloc (sizeof (t_list));
	if (node == NULL)
		return (NULL);
	node->num = num;
	node->next = NULL;
	return (node);
}
