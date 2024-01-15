/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnogared <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 14:34:54 by hnogared          #+#    #+#             */
/*   Updated: 2024/01/15 20:43:49 by hnogared         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libextended_ft.h"

/*
 * Function to set the first n bytes of a memory block to the parameter integer.
 *
 * @param void *s	-> pointer to the memory block to set
 * @param int c		-> integer to set inside the memory block
 * @param size_t n	-> size in bytes of the memory block area to set
 * @return void *	-> pointer to the newly set memory block
 */
void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*buffer;

	if (!s)
		return (NULL);
	i = 0;
	buffer = (char *) s;
	while (i < n)
		buffer[i++] = c;
	return ((void *) buffer);
}
