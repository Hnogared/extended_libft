/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoab.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnogared <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 08:23:55 by hnogared          #+#    #+#             */
/*   Updated: 2023/12/18 20:39:05 by hnogared         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/libft.h"

static int	ft_get_nlen(int n)
{
	int	n_len;
	int	n_buffer;

	n_len = 0;
	n_buffer = n;
	if (n == 0)
		return (1);
	while (n_buffer)
	{
		n_buffer /= 10;
		n_len++;
	}
	if (n < 0)
		n_len++;
	return (n_len);
}

static int	ft_make_nstr(char *buf, int n, int n_len)
{
	int	i;

	if (n == 0)
		buf[0] = '0';
	if (n < 0)
	{
		n *= -1;
		buf[0] = '-';
	}
	i = n_len - 1;
	while (n && i > -1)
	{
		buf[i--] = (n % 10) + '0';
		n /= 10;
	}
	buf[n_len] = 0;
	return (n_len);
}

size_t	ft_itoab(int n, char *buf, size_t bufsize)
{
	int		n_len;

	if (!buf || !bufsize)
		return (0);
	if (n == -2147483648)
	{
		n_len = ft_min(11, bufsize - 1);
		ft_memmove(buf, "-2147483648", n_len * sizeof(char));
		buf[n_len] = 0;
		return (n_len);
	}
	n_len = ft_min(ft_get_nlen(n), bufsize);
	return (ft_make_nstr(buf, n, n_len));
}
