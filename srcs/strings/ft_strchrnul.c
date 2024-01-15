/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchrnul.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnogared <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 22:32:48 by hnogared          #+#    #+#             */
/*   Updated: 2024/01/15 19:54:28 by hnogared         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libextended_ft.h"

char	*ft_strchrnul(const char *s, int c)
{
	int		i;

	i = 0;
	while (s[i] && s[i] != (unsigned char) c)
		i++;
	return ((char *) s + i);
}
