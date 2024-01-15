/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnogared <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 22:22:07 by hnogared          #+#    #+#             */
/*   Updated: 2024/01/16 00:34:27 by hnogared         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libextended_ft.h"

static int	check_input(const char *input)
{
	size_t	i;

	i = 0;
	while (input[i])
	{
		if (input[i] == '%' && input[i + 1] == '%')
			i++;
		else if (input[i] == '%' && !check_char(input[i + 1], "bcspdiuxX"))
			return (ERROR);
		i++;
	}
	return (0);
}

int	ft_printf(const char *input, ...)
{
	int		count;
	va_list	args;

	count = 0;
	if (check_input(input) == ERROR)
		return (0);
	va_start(args, input);
	count += print_formatted((char *) input, args, STDOUT_FILENO);
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

	count = 0;
	if (check_input(input) == ERROR)
		return (0);
	va_start(args, input);
	count += print_formatted((char *) input, args, fd);
	va_end(args);
	return (count);
}
