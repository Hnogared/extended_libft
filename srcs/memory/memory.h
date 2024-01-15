/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnogared <hnogared@student.42perpigna      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 18:45:28 by hnogared          #+#    #+#             */
/*   Updated: 2024/01/15 19:13:36 by hnogared         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MEMORY_H
# define MEMORY_H

int		ft_memcmp(const void *s1, const void *s2, size_t n);

void	ft_bzero(void *s, size_t n);

void	free_double_pointer(void **doube_pointer);

void	*ft_memset(void *s, int c, size_t n);

void	*ft_memcpy(void *dest, const void *src, size_t n);

void	*ft_memmove(void *dest, const void *src, size_t n);

void	*ft_memchr(const void *s, int c, size_t n);

void	*ft_calloc(size_t nmemb, size_t size);

#endif
