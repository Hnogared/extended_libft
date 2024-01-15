/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnogared <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 09:16:32 by hnogared          #+#    #+#             */
/*   Updated: 2024/01/15 20:24:59 by hnogared         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libextended_ft.h"

/*
 * Function to compare the first n bytes of two memory blocks and return the
 * difference between them.
 *
 * @param const void *s1	-> pointer to the first memory block to compare
 * @param const void *s2	-> pointer to the second memory block to compare
 * @param size_t n			-> size in bytes of the memory blocks area to compare
 * @return int				-> difference between the memory blocks
 */
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*buffer_s1;
	const unsigned char	*buffer_s2;

	buffer_s1 = s1;
	buffer_s2 = s2;
	while (n)
	{
		if (*buffer_s1 != *buffer_s2)
			return (*buffer_s1 - *buffer_s2);
		buffer_s1++;
		buffer_s2++;
		n--;
	}
	return (0);
}
