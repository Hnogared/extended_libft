/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnogared <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 22:22:07 by hnogared          #+#    #+#             */
/*   Updated: 2024/01/16 00:48:59 by hnogared         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libextended_ft.h"

static int	check_input(const char *input)
{
	size_t	i;

	i = 0;
	while (input[i] && input[i + 1] && input[i] == '%'
		&& !check_char(input[i + 1], "bcspdiuxX%"))
		i++;
	return (PRINTF_ERROR * !input[i]);
}

int	ft_printf(const char *input, ...)
{
	int		count;
	va_list	args;

	if (!input || check_input(input) == PRINTF_ERROR)
		return (0);
	va_start(args, input);
	count = print_formatted((char *) input, args, STDOUT_FILENO);
	va_end(args);
	return (count);
}

/*
 * Function to interpret a formatted string and print the result.
 */
int	ft_fprintf(int fd, const char *input, ...)
{
	int		count;
	va_list	args;

	if (fd < 0 || !input || check_input(input) == PRINTF_ERROR)
		return (0);
	va_start(args, input);
	count = print_formatted((char *) input, args, fd);
	va_end(args);
	return (count);
}
