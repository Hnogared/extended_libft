/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnogared <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 13:30:50 by hnogared          #+#    #+#             */
/*   Updated: 2024/01/15 22:50:46 by hnogared         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libextended_ft.h"

/*
 * Function to write a character to a file descriptor.
 * The function won't write if the file descriptor is invalid/negative.
 *
 * @param char c	-> character to write
 * @param int fd	-> file descriptor to write into
 */
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, fd >= 0);
}
