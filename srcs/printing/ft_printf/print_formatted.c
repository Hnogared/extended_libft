/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_formatted.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnogared <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 22:22:07 by hnogared          #+#    #+#             */
/*   Updated: 2024/01/16 00:34:01 by hnogared         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libextended_ft.h"

int	check_char(char c, const char *set)
{
	size_t	i;

	i = 0;
	while (set[i] && (unsigned char) c != (unsigned char) set[i])
		i++;
	return (!!set[i] || (unsigned char) c == 0);
}

static int	print_nbrconv(char conv, va_list args, int fd)
{
	unsigned long	tempaddress;

	tempaddress = 0;
	if (conv == 'p')
	{
		tempaddress = (unsigned long) va_arg(args, unsigned long);
		if (!tempaddress)
			return (printf_putstr_fd("(nil)", fd));
		return (printf_putstr_fd("0x", fd)
			+ printf_puthex_fd(tempaddress, 0, conv, fd));
	}
	if (conv == 'd' || conv == 'i')
		return (printf_putnbr_fd((int) va_arg(args, int), 0, fd));
	if (conv == 'u')
		return (printf_putuint_fd(va_arg(args, unsigned int), 0, fd));
	if (conv == 'x' || conv == 'X')
		return (printf_puthex_fd(va_arg(args, unsigned int), 0, conv, fd));
	if (conv == 'b')
		return (printf_putnbits_fd(va_arg(args, int), fd));
	return (0);
}

static int	print_chrconv(char conv, va_list args, int fd)
{
	int				count;
	char			*tempstr;

	count = 0;
	if (conv == 'c')
		count += printf_putchar_fd((int) va_arg(args, int), fd);
	if (conv == 's')
	{
		tempstr = (char *) va_arg(args, char *);
		if (!tempstr)
			return (printf_putstr_fd("(null)", fd));
		count += printf_putstr_fd(tempstr, fd);
	}
	if (conv == '%')
		count += printf_putchar_fd('%', fd);
	return (count);
}

int	print_formatted(const char *input, va_list args, int fd)
{
	int		count;
	size_t	i;
	size_t	j;

	i = 0;
	count = 0;
	while (input[i])
	{
		j = 0;
		while (input[i + j] && input[i + j] != '%')
			j++;
		write(fd, input + i, j);
		i += j;
		count += j;
		if (input[i] == '%')
		{
			if (check_char(input[i + 1], "bpdiuxX"))
				count += print_nbrconv(input[i + 1], args, fd);
			if (check_char(input[i + 1], "cs%"))
				count += print_chrconv(input[i + 1], args, fd);
			i += 2;
		}
	}
	return (count);
}
