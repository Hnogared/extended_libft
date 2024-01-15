/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnogared <hnogared@student.42perpigna      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 23:52:29 by hnogared          #+#    #+#             */
/*   Updated: 2024/01/16 00:34:12 by hnogared         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *str, ...);
int		ft_fprintf(int fd, const char *str, ...);

int		check_char(char c, const char *set);
//int		check_input(const char *input);

int		print_formatted(const char *input, va_list args, int fd);
//int		print_nbrconv(char conv, va_list args, int fd);
//int		print_chrconv(char conv, va_list args, int fd);

int		printf_putchar_fd(char c, int fd);
int		printf_putstr_fd(char *s, int fd);
int		printf_putnbr_fd(int n, int len, int fd);
int		printf_putuint_fd(unsigned int n, int len, int fd);

int		printf_puthex_fd(unsigned long n, int len, char cap, int fd);
int		printf_putnbits_fd(int nbr, int fd);

#endif
