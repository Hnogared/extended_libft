/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chars.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnogared <hnogared@student.42perpigna      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 18:40:55 by hnogared          #+#    #+#             */
/*   Updated: 2024/01/15 18:41:39 by hnogared         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARS_H
# define CHARS_H

/*
 * Function to check if a character is alphabetic [a-zA-Z] or numeric [0-1].
 *
 * @param int c	-> character to check
 * @return int	-> 1 if true | 0 if false
 */
int		ft_isalnum(int c);

/*
 * Function to check if a character is alphabetical [a-zA-Z].
 *
 * @param int c	-> character to check
 * @return int	-> 1 if true | 0 if false
 */
int		ft_isalpha(int c);

/*
 * Function to check if a character is within the ascii table.
 *
 * @param int c	-> character to check
 * @return int	-> 1 if true | 0 if false
 */
int		ft_isascii(int c);

/*
 * Function to check if a character is a number [0-9].
 *
 * @param int c	-> character to check
 * @return int	-> 1 if true | 0 if false
 */
int		ft_isdigit(int c);

/*
 * Function to check if a character is displayable.
 *
 * @param int c	-> character to check
 * @return int	-> 1 if true | 0 if false
 */
int		ft_isprint(int c);

/*
 * Function to check if a character is a whitespace.
 *
 * @param int c	-> character to check
 * @return int	-> 1 if true | 0 if false
 */
int		ft_iswhitespace(int c);

/*
 * Function to change an alphabetical character to the lowercase.
 *
 * @param int c	-> character to change
 * @return int	-> the resulting character
 */
int		ft_tolower(int c);

/*
 * Function to change an alphabetical character to the uppercase.
 *
 * @param int c	-> character to change
 * @return int	-> the resulting character
 */
int		ft_toupper(int c);

#endif
