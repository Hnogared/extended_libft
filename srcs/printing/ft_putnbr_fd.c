/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnogared <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 14:47:41 by hnogared          #+#    #+#             */
/*   Updated: 2024/01/15 22:53:24 by hnogared         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libextended_ft.h"

/*
 * Function to write an integer to a file descriptor.
 * The function won't write if the file descriptor is invalid/negative.
 *
 * @param int n		-> integer to write
 * @param int fd	-> file descriptor to write into
 */
void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11 * (fd >= 0));
		return ;
	}
	write(fd, "-", (n < 0 && fd >= 0));
	n *= -1 * (n < 0) + (n >= 0);
	if (n <= 9)
		return (ft_putchar_fd(n + '0', fd));
	ft_putnbr_fd(n / 10, fd);
	ft_putnbr_fd(n % 10, fd);
}
