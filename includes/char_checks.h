/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char_checks.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnogared <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 20:59:36 by hnogared          #+#    #+#             */
/*   Updated: 2023/12/18 21:24:24 by hnogared         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHAR_CHECKS_H
# define CHAR_CHECKS_H

/*
 * Function to check if a character is alphabetic [a-zA-Z] or numeric [0-1].
 *
 * @param int c	-> character to check
 * @return int	-> 1 if true | 0 if false
 */
int	ft_isalnum(int c);

/*
 * Function to check if a character is alphabetical [a-zA-Z].
 *
 * @param int c	-> character to check
 * @return int	-> 1 if true | 0 if false
 */
int	ft_isalpha(int c);

/*
 * Function to check if a character is within the ascii table.
 *
 * @param int c	-> character to check
 * @return int	-> 1 if true | 0 if false
 */
int	ft_isascii(int c);

/*
 * Function to check if a character is a number [0-9].
 *
 * @param int c	-> character to check
 * @return int	-> 1 if true | 0 if false
 */
int	ft_isdigit(int c);

/*
 * Function to check if a character is displayable.
 *
 * @param int c	-> character to check
 * @return int	-> 1 if true | 0 if false
 */
int	ft_isprint(int c);

/*
 * Function to check if a character is a whitespace.
 *
 * @param int c	-> character to check
 * @return int	-> 1 if true | 0 if false
 */
int	ft_iswhitespace(int c);

/*
 * Function to change an alphabetical character to the lowercase.
 *
 * @param int c	-> character to change
 * @return int	-> the resulting character
 */
int	ft_tolower(int c);

/*
 * Function to change an alphabetical character to the uppercase.
 *
 * @param int c	-> character to change
 * @return int	-> the resulting character
 */
int	ft_toupper(int c);

#endif
