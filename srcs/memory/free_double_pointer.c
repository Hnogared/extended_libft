/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_double_pointer.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnogared <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 23:26:06 by hnogared          #+#    #+#             */
/*   Updated: 2024/01/15 20:01:46 by hnogared         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libextended_ft.h"

/*
 * Function to free an allocated double array pointer.
 * The last subpointer needs to be pointing to NULL, else invalid memory reads
 * past the allocated double array will occur.
 *
 * @param void **double_pointer	-> the double array pointer to free
 */
void	free_double_pointer(void **double_pointer)
{
	void	**temp;

	if (!double_pointer)
		return ;
	temp = double_pointer;
	while (*double_pointer)
		free(*(double_pointer++));
	free(temp);
}
