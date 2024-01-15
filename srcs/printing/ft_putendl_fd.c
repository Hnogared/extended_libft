/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnogared <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 13:37:01 by hnogared          #+#    #+#             */
/*   Updated: 2024/01/15 22:50:55 by hnogared         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libextended_ft.h"

/*
 * Function to write a string followed by a newline to a file descriptor.
 * The function won't write if the fd is invalid/negative or the string is NULL.
 *
 * @param char *s	-> string to write
 * @param int fd	-> file descriptor to write into
 */
void	ft_putendl_fd(char *s, int fd)
{
	bool	valid_fd;

	valid_fd = fd >= 0;
	write(fd, s, ft_strlen(s) * valid_fd);
	write(fd, "\n", valid_fd);
}
