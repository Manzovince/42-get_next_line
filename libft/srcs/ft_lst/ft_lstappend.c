/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstappend.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmanzoni <vmanzoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 16:56:35 by vmanzoni          #+#    #+#             */
/*   Updated: 2019/01/27 16:39:20 by vmanzoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	ft_lstappend(t_list *list, t_list *new)
{
	t_list		*current;

	if (list && new)
	{
		current = list;
		while (current->next != NULL)
			current = current->next;
		current->next = new;
		new->next = NULL;
	}
}
