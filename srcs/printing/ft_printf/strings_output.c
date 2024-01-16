/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strings_output.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnogared <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 22:52:17 by hnogared          #+#    #+#             */
/*   Updated: 2024/01/16 01:43:15 by hnogared         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	printf_strlen(const char *s)
{
	int	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	printf_putchar_fd(char c, int fd)
{
	return (write(fd, &c, 1));
}

int	printf_putstr_fd(char *s, int fd)
{
	return (write(fd, s, printf_strlen(s)));
}
