/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_lists.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnogared <hnogared@student.42perpigna      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 18:42:35 by hnogared          #+#    #+#             */
/*   Updated: 2024/01/15 19:57:52 by hnogared         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LINKED_LISTS_H
# define LINKED_LISTS_H

/*
 * Linked list node
 *
 * void *content		-> pointer to the node's content
 * struct s_list *next	-> pointer to the list's next node
 */
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

/*
 * Function to add a linked list node at the end of a linked list.
 *
 * @param t_list **lst	-> pointer to the linked list to add to
 * @param t_list *new	-> linked list node to add
 */
void	ft_lstadd_back(t_list **lst, t_list *new);

/*
 * Function to add a linked list node at the beginning of a linked list.
 *
 * @param t_list **lst	-> pointer to the linked list to add to
 * @param t_list *new	-> linked list node to add
 */
void	ft_lstadd_front(t_list **lst, t_list *new);

/*
 * Function to destroy a linked list using the parameter function to free the
 * content of each node.
 *
 * @param t_list **lst			-> pointer to the linked list to destroy
 * @param void (*del)(void *)	-> pointer to the content destroying function
 */
void	ft_lstclear(t_list **lst, void (*del)(void *));

/*
 * Function to free a linked list node using the parameter function to free the
 * node content.
 *
 * @param t_list *lst			-> node to free
 * @param void (*del)(void *)	-> pointer to the content destroying function
 */
void	ft_lstdelone(t_list *lst, void (*del)(void *));

/*
 * Function to apply a function to the content of each node of a linked list.
 *
 * @param t_list *lst		-> the first node of the linked list
 * @param void (*f)(void *)	-> pointer to the function to apply on each content
 */
void	ft_lstiter(t_list *lst, void (*f)(void *));

/*
 * Function to return the last node of a linked list.
 *
 * @param t_list *lst	-> first node of the linked list to search
 * @return t_list *		-> last node of the linked list
 */
t_list	*ft_lstlast(t_list *lst);

/*
 * Function to return an allocated copy of a linked list with the parameter
 * function applied to each of its node's content.
 *
 * @param t_list *lst		-> first node of the linked list to copy
 * @param void *(*f)(void *)-> pointer to the function to apply to each content
 * @param void(*del)(void *)-> pointer to the function to destroy a node content
 * @return t_list *			-> the first node of the linked list duplication
 */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

/*
 * Function to return an allocated linked list node with the parameter content.
 *
 * @param void *content	-> pointer to the content to store inside the node
 * @return t_list *		-> the newly allocated node
 */
t_list	*ft_lstnew(void *content);

/*
 * Function to return the size of a linked list.
 *
 * @param t_list *lst	-> first node of the linked list to get the size from
 * @return int			-> size of the linked list
 */
int		ft_lstsize(t_list *lst);

#endif
