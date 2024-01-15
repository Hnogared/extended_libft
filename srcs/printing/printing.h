/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printing.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnogared <hnogared@student.42perpigna      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 18:50:11 by hnogared          #+#    #+#             */
/*   Updated: 2024/01/15 18:51:22 by hnogared         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTING_H
# define PRINTING_H

void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

/* PRINTF */
int		ft_printf(const char *str, ...);
int		ft_fprintf(int fd, const char *str, ...);

int		ft_check_char(const char c, const char *set);
int		ft_check_input(const char *input);

int		ft_print_input(char *input, va_list args, int fd);
int		ft_print_nbrconv(const char conv, va_list args, int fd);
int		ft_print_chrconv(const char conv, va_list args, int fd);

int		ft_putchar_fdout(char c, int fd);
int		ft_putstr_fdout(char *s, int fd);
int		ft_putnbr_fdout(int n, int len, int fd);
int		ft_putunsigned_fdout(unsigned int n, int len, int fd);
int		ft_puthex_fdout(unsigned long n, int len, char cap, int fd);

int		ft_putnbits_fdout(int nbr, int fd);

#endif
