/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnogared <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 08:53:51 by hnogared          #+#    #+#             */
/*   Updated: 2024/01/15 20:33:55 by hnogared         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libextended_ft.h"

/*
 * Function to copy n bytes of a memory block inside another.
 * The result may be unexpected if the memory blocks overlap. When in doubt, use
 * ft_memmove().
 *
 * @param void *dest		-> pointer to memory block to copy into
 * @param const void *src	-> pointer to the memory block to copy
 * @param size_t n			-> size in bytes of the memory block area to copy
 * @return void *			-> pointer to the copy result
 */
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*buffer_dest;
	char	*buffer_src;

	if (!dest && !src && n)
		return (NULL);
	buffer_dest = (char *) dest;
	buffer_src = (char *) src;
	i = 0;
	while (i < n)
	{
		buffer_dest[i] = buffer_src[i];
		i++;
	}
	return (dest);
}
