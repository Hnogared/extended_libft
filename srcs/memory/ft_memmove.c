/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnogared <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 09:29:46 by hnogared          #+#    #+#             */
/*   Updated: 2024/01/15 19:50:45 by hnogared         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libextended_ft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*buffer_dest;
	char	*buffer_src;

	if (!dest && !src && n)
		return (NULL);
	i = 0;
	buffer_dest = (char *) dest;
	buffer_src = (char *) src;
	if (src > dest)
	{
		while (i < n)
		{
			buffer_dest[i] = buffer_src[i];
			i++;
		}
		return (dest);
	}
	i = n - 1;
	while (i + 1 > 0)
	{
		buffer_dest[i] = buffer_src[i];
		i--;
	}
	return (dest);
}
