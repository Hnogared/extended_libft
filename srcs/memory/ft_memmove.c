/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnogared <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 09:29:46 by hnogared          #+#    #+#             */
/*   Updated: 2024/01/15 20:36:54 by hnogared         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libextended_ft.h"

/*
 * Function to copy n bytes of a memory block inside another with no issues if
 * the blocks overlap.
 *
 * @param void *dest		-> pointer to memory block to copy into
 * @param const void *src	-> pointer to the memory block to copy
 * @param size_t n			-> size in bytes of the memory block area to copy
 * @return void *			-> pointer to the copy result
 */
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*buffer_dest;
	char	*buffer_src;

	if (!dest && !src && n)
		return (NULL);
	buffer_dest = (char *) dest;
	buffer_src = (char *) src;
	if (src > dest)
		return (ft_memcpy(dest, src, n));
	while (n)
	{
		buffer_dest[n - 1] = buffer_src[n - 1];
		n--;
	}
	return (dest);
}
