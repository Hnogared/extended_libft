/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnogared <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 14:07:16 by hnogared          #+#    #+#             */
/*   Updated: 2024/01/15 20:03:46 by hnogared         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libextended_ft.h"

/*
 * Function to set n bytes of the parameter memory block to 0.
 *
 * @param void *mem_block	-> pointer to the memory block to set to 0
 * @param size_t n			-> size in bytes of the block to set to 0
 */
void	ft_bzero(void *mem_block, size_t n)
{
	ft_memset(mem_block, 0, n);
}
