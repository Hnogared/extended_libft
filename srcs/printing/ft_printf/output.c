/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_output.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnogared <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 22:52:17 by hnogared          #+#    #+#             */
/*   Updated: 2024/01/16 00:07:06 by hnogared         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libextended_ft.h"

int	printf_putchar_fd(char c, int fd)
{
	return (write(fd, &c, fd >= 0));
}

static size_t	printf_strlen(const char *s)
{
	int	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	printf_putstr_fd(char *s, int fd)
{
	return (write(fd, s, printf_strlen(s) * (fd >= 0)));
}

int	printf_putnbr_fd(int n, int len, int fd)
{
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return (11);
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		len++;
		n *= -1;
	}
	if (n > 9)
	{
		len += printf_putnbr_fd(n / 10, 0, fd);
		len += printf_putnbr_fd(n % 10, 0, fd);
	}
	if (n <= 9)
	{
		printf_putchar_fd(n + '0', fd);
		len++;
	}
	return (len);
}

int	printf_putuint_fd(unsigned int n, int len, int fd)
{
	if (n > 9)
	{
		len += printf_putuint_fd(n / 10, 0, fd);
		len += printf_putuint_fd(n % 10, 0, fd);
	}
	if (n <= 9)
	{
		printf_putchar_fd(n + '0', fd);
		len++;
	}
	return (len);
}
