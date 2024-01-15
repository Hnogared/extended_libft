/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnogared <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 11:08:32 by hnogared          #+#    #+#             */
/*   Updated: 2024/01/15 19:49:34 by hnogared         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libextended_ft.h"

/*
 * Function to return an allocated copy of a linked list with the parameter
 * function applied to each of its node's content.
 *
 * @param t_list *lst		-> first node of the linked list to copy
 * @param void *(*f)(void *)-> pointer to the function to apply to each content
 * @param void(*del)(void *)-> pointer to the function to destroy a node content
 * @return t_list *			-> the first node of the linked list duplication
 */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*start;
	t_list	*current;

	if (!lst || !f || !del)
		return (NULL);
	start = ft_lstnew(f(lst->content));
	if (!start)
		return (NULL);
	current = start;
	while (lst->next)
	{
		lst = lst->next;
		current->next = ft_lstnew(f(lst->content));
		if (!current->next)
		{
			ft_lstclear(&start, del);
			return (NULL);
		}
		current = current->next;
	}
	return (start);
}
