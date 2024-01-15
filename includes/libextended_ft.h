/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libextended_ft.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnogared <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 14:11:48 by hnogared          #+#    #+#             */
/*   Updated: 2024/01/15 19:46:14 by hnogared         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBEXTENDED_FT_H
# define LIBEXTENDED_FT_H

# include <unistd.h>
# include <stddef.h>
# include <stdlib.h>
# include <stdint.h>

# include <stdarg.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE	127
# endif

# ifndef ERROR
#  define ERROR	1
# endif

/* MANDATORY */
# include "../srcs/chars/chars.h"
# include "../srcs/memory/memory.h"
# include "../srcs/numbers/numbers.h"
# include "../srcs/printing/printing.h"
# include "../srcs/strings/strings.h"

/* BONUS */
# include "../srcs/linked_lists/linked_lists.h"

/* GET_NEXT_LINE */
char	*get_next_line(int fd);
#endif
