/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnogared <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 09:16:32 by hnogared          #+#    #+#             */
/*   Updated: 2024/01/15 19:50:29 by hnogared         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libextended_ft.h"

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
