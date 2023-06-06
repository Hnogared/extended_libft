/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnogared <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 09:00:31 by hnogared          #+#    #+#             */
/*   Updated: 2023/06/06 22:36:18 by hnogared         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*current;

	if (!lst[0])
		lst[0] = new;
	else
	{
		current = lst[0];
		while (current->next != NULL)
			current = current->next;
		current->next = new;
	}
}
