/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_output2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnogared <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 21:01:38 by hnogared          #+#    #+#             */
/*   Updated: 2024/01/15 19:52:53 by hnogared         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libextended_ft.h"

int	ft_putnbits_fdout(int nbr, int fd)
{
	char			bit;
	unsigned int	int_size;
	unsigned int	mask;

	int_size = sizeof(int) * 8;
	mask = 1 << (int_size - 1);
	while (mask)
	{
		bit = '0' + !!(nbr & mask);
		write(fd, &bit, 1);
		mask = mask >> 1;
	}
	return (int_size);
}
