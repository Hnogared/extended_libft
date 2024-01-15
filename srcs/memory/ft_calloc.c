/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnogared <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 14:01:07 by hnogared          #+#    #+#             */
/*   Updated: 2024/01/15 20:07:38 by hnogared         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libextended_ft.h"

/*
 * Function to return an allocated and zeroed out memory block with the total
 * size of a given amount of members of a given size each.
 * Return a NULL pointer if the allocation size overflows an unsigned integer or
 * the allocation failed.
 *
 * @param size_t nmemb	-> amount of members to allocate inside th block
 * @param size_t size	-> size of each member to allocate
 * @return void *		-> pointer to the allocated memory block
 */
void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	temp;
	void	*buffer;

	if (nmemb == 0 || size == 0)
		return ((void *) malloc(0));
	temp = nmemb * size;
	if (!(size == temp / nmemb))
		return (NULL);
	buffer = (void *) malloc(temp);
	if (!buffer)
		return (NULL);
	ft_bzero(buffer, temp);
	return (buffer);
}
