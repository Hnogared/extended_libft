/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printing.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnogared <hnogared@student.42perpigna      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 18:50:11 by hnogared          #+#    #+#             */
/*   Updated: 2024/01/15 23:53:10 by hnogared         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTING_H
# define PRINTING_H

/*
 * Function to write a character to a file descriptor.
 * The function won't write if the fd is invalid/negative.
 *
 * @param char c	-> character to write
 * @param int fd	-> file descriptor to write into
 */
void	ft_putchar_fd(char c, int fd);

/*
 * Function to write a string followed by a newline to a file descriptor.
 * The function won't write if the fd is invalid/negative or the string is NULL.
 *
 * @param char *s	-> string to write
 * @param int fd	-> file descriptor to write into
 */
void	ft_putendl_fd(char *s, int fd);

/*
 * Function to write an integer to a file descriptor.
 * The function won't write if the file descriptor is invalid/negative.
 *
 * @param int n		-> integer to write
 * @param int fd	-> file descriptor to write into
 */
void	ft_putnbr_fd(int n, int fd);

/*
 * Function to write a string to a file descriptor.
 * The function won't write if the fd is invalid/negative or the string is null.
 *
 * @param char *s	-> string to write
 * @param int fd	-> file descriptor to write into
 */
void	ft_putstr_fd(char *s, int fd);

#endif
