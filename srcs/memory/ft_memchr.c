/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnogared <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 08:47:57 by hnogared          #+#    #+#             */
/*   Updated: 2024/01/15 20:24:13 by hnogared         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libextended_ft.h"

/*
 * Function to return a pointer to the first occurence of an integer inside the
 * first n bytes of a memory block, both interpreted a unsigned chars.
 * Return a NULL pointer if no occurence has been found.
 *
 * @param const void *s	-> pointer to the memory block to search into
 * @param int c			-> integer to search for
 * @param size_t n		-> size in bytes of the memory block area to search into
 * @return void *		-> pointer to the first occurence of the integer if found
 */
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*buffer;

	buffer = (unsigned char *) s;
	while (n--)
	{
		if (*buffer == (unsigned char) c)
			return ((void *) buffer);
		buffer++;
	}
	return (NULL);
}
