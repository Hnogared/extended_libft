/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnogared <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 08:52:20 by hnogared          #+#    #+#             */
/*   Updated: 2024/01/15 19:36:15 by hnogared         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Function to return the last node of a linked list.
 *
 * @param t_list *lst	-> first node of the linked list to search
 * @return t_list *		-> last node of the linked list
 */
t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (lst);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
