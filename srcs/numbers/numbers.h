/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numbers.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnogared <hnogared@student.42perpigna      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 18:48:01 by hnogared          #+#    #+#             */
/*   Updated: 2024/01/15 18:49:31 by hnogared         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NUMBERS_H
# define NUMBERS_H

/*
 * Function to convert a string into a float.
 * Whitespaces present at the beginning of the string are skipped. The conversion
 * ends at the last number character, the following ones are ignored.
 *
 * @param const char *nptr	-> pointer to the string to convert
 * @return float			-> the resulting float conversion
 *
 * @child_func is_neg		-> function to check if a string starts with '-'
 * @child_func create_nbr	-> function to convert a trimmd string into a float
 */
float	ft_atof(const char *nptr);

/*
 * Function to convert an untrimmed string into an int.
 * Whitespaces at the beginning of the string are skipped. The conversion ends
 * at the last digit of the number, following characters ar ignored.
 *
 * @param const char *nptr	-> pointer to the strong to convert
 * @return int				-> the resulting converted integer
 */
int		ft_atoi(const char *nptr);

/*
 * Function to convert an integer into an allocated string.
 *
 * @param int n		-> integer to convert
 * @return char *	-> teh resulting allocated string
 *
 * @child_func get_num_len -> function to get the character length of an int
 */
char	*ft_itoa(int n);

/*
 * Function to convert and store an integer inside a buffer array string.
 *
 * @param int n			-> the integer to store
 * @param char *buf		-> pointer to the array string to store the int into
 * @param size_t bufsize-> size in bytes of the buffer to store the int into
 * @return size_t		-> character size of the number saved inside the buffer
 *
 * @child_func get_num_len	-> function to get the character length of an int
 */
size_t	ft_itoab(int n, char *buf, size_t bufsize);

/*
 * Function to return the smallest of two integers.
 *
 * @param int n1	-> first integer to compare
 * @param int n2	-> second integer to compare
 * @return int		-> the smallest integer
 */
int		ft_min(int n1, int n2);

/*
 * Function to return the bigest of two integers.
 *
 * @param int n1	-> first integer to compare
 * @param int n2	-> second integer to compare
 * @return int		-> the bigest integer
 */
int		ft_max(int n1, int n2);

/*
 * Function to return the smallest of two floats.
 *
 * @param float n1	-> first float to compare
 * @param float n2	-> second float to compare
 * @return float	-> the smallest float
 */
float	ft_fmin(float n1, float n2);

/*
 * Function to return the bigest of two floats.
 *
 * @param float n1	-> first float to compare
 * @param float n2	-> second float to compare
 * @return float	-> the bigest float
 */
float	ft_fmax(float n1, float n2);

#endif
