/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnogared <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 21:24:13 by hnogared          #+#    #+#             */
/*   Updated: 2023/06/06 22:42:45 by hnogared         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# define ERROR	0

int		ft_printf(const char *str, ...);

int		ft_check_char(const char c, const char *set);
int		ft_check_input(const char *input);

int		ft_print_input(char *input, va_list args);
int		ft_print_nbrconv(const char conv, va_list args);
int		ft_print_chrconv(const char conv, va_list args);

int		ft_putchar_fdout(char c, int fd);
int		ft_putstr_fdout(char *s, int fd);
int		ft_putnbr_fdout(int n, int len, int fd);
int		ft_putunsigned_fdout(unsigned int n, int len, int fd);
int		ft_puthex_fdout(unsigned long n, int len, char cap, int fd);
int		ft_putlhex_fdout(unsigned long n, int len, char cap, int fd);

size_t	ft_strlen(char *str);

#endif
