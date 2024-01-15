/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnogared <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 10:04:33 by hnogared          #+#    #+#             */
/*   Updated: 2024/01/15 19:49:05 by hnogared         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libextended_ft.h"

/*
 * Function to destroy a linked list using the parameter function to free the
 * content of each node.
 *
 * @param t_list **lst			-> pointer to the linked list to destroy
 * @param void (*del)(void *)	-> pointer to the content destroying function
 */
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next;

	if (!lst || !del)
		return ;
	while ((*lst)->next)
	{
		next = (*lst)->next;
		del(next->content);
		(*lst)->next = next->next;
		free(next);
	}
	del((*lst)->content);
	free(*lst);
	*lst = NULL;
}
