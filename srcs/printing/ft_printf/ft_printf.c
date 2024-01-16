/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnogared <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 22:22:07 by hnogared          #+#    #+#             */
/*   Updated: 2024/01/16 02:14:36 by hnogared         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	check_input(const char *input, const char *prefix)
{
	int		i;
	char	quoted[4];

	i = 0;
	while (input[i])
	{
		if (i > 0 && input[i - 1] == '%' && !check_char(input[i], "bcspdiuxX%"))
		{
			write(STDERR_FILENO, prefix, printf_strlen(prefix));
			write(STDERR_FILENO, PRINTF_ERRMSG, printf_strlen(PRINTF_ERRMSG));
			quoted[0] = '`';
			quoted[1] = input[i];
			quoted[2] = '`';
			quoted[3] = '\n';
			write(STDERR_FILENO, quoted, 4);
			return (PRINTF_ERROR);
		}
		i += 1 + (input[i + 1] && input[i - 1] == '%' && input[i] == '%');
	}
	return (0);
}

int	ft_printf(const char *input, ...)
{
	int		count;
	va_list	args;

	if (!input || check_input(input, PRINTF_PREFIX) == PRINTF_ERROR)
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

	if (fd < 0 || !input || check_input(input, FPRINTF_PREFIX) == PRINTF_ERROR)
		return (0);
	va_start(args, input);
	count = print_formatted((char *) input, args, fd);
	va_end(args);
	return (count);
}
