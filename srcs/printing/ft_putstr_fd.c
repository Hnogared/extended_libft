/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnogared <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 13:33:57 by hnogared          #+#    #+#             */
/*   Updated: 2024/01/15 22:58:15 by hnogared         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libextended_ft.h"

/*
 * Function to write a string to a file descriptor.
 * The function won't write if the fd is invalid/negative or the string is null.
 *
 * @param char *s	-> string to write
 * @param int fd	-> file descriptor to write into
 */
void	ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s) * (fd >= 0));
}
