/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_output2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnogared <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 21:01:38 by hnogared          #+#    #+#             */
/*   Updated: 2024/01/16 00:11:51 by hnogared         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libextended_ft.h"

int	printf_puthex_fd(unsigned long n, int len, char cap, int fd)
{
	char	*baselow;
	char	*basehigh;

	baselow = "0123456789abcdef";
	basehigh = "0123456789ABCDEF";
	if (n > 15)
	{
		len += printf_puthex_fd(n / 16, 0, cap, fd);
		len += printf_puthex_fd(n % 16, 0, cap, fd);
	}
	if (n <= 15)
	{
		if (cap == 'X')
			printf_putchar_fd(basehigh[n], fd);
		else
			printf_putchar_fd(baselow[n], fd);
		len++;
	}
	return (len);
}

int	printf_putnbits_fd(int nbr, int fd)
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
