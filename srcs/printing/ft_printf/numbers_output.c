/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numbers_output.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnogared <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 21:01:38 by hnogared          #+#    #+#             */
/*   Updated: 2024/01/16 01:43:24 by hnogared         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	printf_putint_fd(int n, int len, int fd)
{
	if (n == -2147483648)
		return (write(fd, "-2147483648", 11));
	len += write(fd, "-", n < 0);
	n *= -1 * (n < 0) + (n >= 0);
	if (n <= 9)
		return (len + printf_putchar_fd(n + '0', fd));
	return (len + printf_putint_fd(n / 10, 0, fd)
		+ printf_putchar_fd(n % 10 + '0', fd));
}

int	printf_putuint_fd(unsigned int n, int len, int fd)
{
	if (n <= 9)
		return (len + printf_putchar_fd(n + '0', fd));
	return (len + printf_putuint_fd(n / 10, 0, fd)
		+ printf_putchar_fd(n % 10 + '0', fd));
}

int	printf_puthex_fd(unsigned long n, int len, char cap, int fd)
{
	char	digit;
	char	*base;

	base = "0123456789abcdef";
	if (n <= 15)
	{
		digit = base[n] - 32 * (n >= 10 && cap == 'X');
		return (len + printf_putchar_fd(digit, fd));
	}
	return (len + printf_puthex_fd(n / 16, 0, cap, fd)
		+ printf_puthex_fd(n % 16, 0, cap, fd));
}

int	printf_putnbits_fd(int nbr, int fd)
{
	char	bit;
	size_t	int_size;
	size_t	mask;

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
