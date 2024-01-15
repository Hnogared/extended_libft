/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnogared <hnogared@student.42perpigna      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 18:45:28 by hnogared          #+#    #+#             */
/*   Updated: 2024/01/15 20:40:01 by hnogared         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MEMORY_H
# define MEMORY_H

/*
 * Function to free an allocated double array pointer.
 * The last subpointer needs to be pointing to NULL, else invalid memory reads
 * past the allocated double array will occur.
 *
 * @param void **double_pointer	-> the double array pointer to free
 */
void	free_double_pointer(void **doube_pointer);

/*
 * Function to set n bytes of the parameter memory block to 0.
 *
 * @param void *mem_block	-> pointer to the memory block to set to 0
 * @param size_t n			-> size in bytes of the block to set to 0
 */
void	ft_bzero(void *mem_block, size_t n);

/*
 * Function to return an allocated and zeroed out memory block with the total
 * size of a given amount of members of a given size each.
 * Return a NULL pointer if the allocation size overflows an unsigned integer or
 * the allocation failed.
 *
 * @param size_t nmemb	-> amount of members to allocate inside th block
 * @param size_t size	-> size of each member to allocate
 * @return void *		-> pointer to the allocated memory block
 */
void	*ft_calloc(size_t nmemb, size_t size);

/*
 * Function to return a pointer to the first occurence of an integer inside the
 * first n bytes of a memory block, both interpreted a unsigned chars.
 * Return a NULL pointer if no occurence has been found.
 *
 * @param const void *s	-> pointer to the memory block to search into
 * @param int c			-> integer to search for
 * @param size_t n		-> size in bytes of the memory block to area search into
 * @return void *		-> pointer to the first occurence of the integer if found
 */
void	*ft_memchr(const void *s, int c, size_t n);

/*
 * Function to compare the first n bytes of two memory blocks and return the
 * difference between them.
 *
 * @param const void *s1	-> pointer to the first memory block to compare
 * @param const void *s2	-> pointer to the second memory block to compare
 * @param size_t n			-> size in bytes of the memory blocks area to compare
 * @return int				-> difference between the memory blocks
 */
int		ft_memcmp(const void *s1, const void *s2, size_t n);

/*
 * Function to copy n bytes of a memory block inside another.
 * The result may be unexpected if the memory blocks overlap. When in doubt, use
 * ft_memmove().
 *
 * @param void *dest		-> pointer to memory block to copy into
 * @param const void *src	-> pointer to the memory block to copy
 * @param size_t n			-> size in bytes of the memory block area to copy
 * @return void *			-> pointer to the copy result
 */
void	*ft_memcpy(void *dest, const void *src, size_t n);

/*
 * Function to copy n bytes of a memory block inside another with no issues if
 * the blocks overlap.
 *
 * @param void *dest		-> pointer to memory block to copy into
 * @param const void *src	-> pointer to the memory block to copy
 * @param size_t n			-> size in bytes of the memory block area to copy
 * @return void *			-> pointer to the copy result
 */
void	*ft_memmove(void *dest, const void *src, size_t n);

/*
 * Function to set the first n bytes of a memory block to the parameter integer.
 *
 * @param void *s	-> pointer to the memory block to set
 * @param int c		-> integer to set inside the memory block
 * @param size_t n	-> size in bytes of the memory block area to set
 * @return void *	-> pointer to the newly set memory block
 */
void	*ft_memset(void *s, int c, size_t n);

#endif
