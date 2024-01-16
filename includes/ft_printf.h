/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnogared <hnogared@student.42perpigna      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 23:52:29 by hnogared          #+#    #+#             */
/*   Updated: 2024/01/16 01:44:59 by hnogared         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

# define PRINTF_ERROR	1

# define PRINTF_PREFIX	"printf: "
# define FPRINTF_PREFIX	"fprintf: "

# define PRINTF_ERRMSG	"unrecognized conversion "

int		ft_printf(const char *str, ...);
int		ft_fprintf(int fd, const char *str, ...);

int		check_char(char c, const char *set);

int		print_formatted(const char *input, va_list args, int fd);

size_t	printf_strlen(const char *s);
int		printf_putchar_fd(char c, int fd);
int		printf_putstr_fd(char *s, int fd);

int		printf_putint_fd(int n, int len, int fd);
int		printf_putuint_fd(unsigned int n, int len, int fd);
int		printf_puthex_fd(unsigned long n, int len, char cap, int fd);
int		printf_putnbits_fd(int nbr, int fd);

#endif
