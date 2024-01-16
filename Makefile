# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hnogared <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/07 07:19:57 by hnogared          #+#    #+#              #
#    Updated: 2024/01/16 01:15:31 by hnogared         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#LIB_NAME			:=	extended_ft
LIB_NAME			:=	ft

PRINTF_LIB_NAME		:=	ftprintf

LIB_STATIC			:=	$(addsuffix .a, $(addprefix lib, $(LIB_NAME)))
LIB_DYNAMIC			:=	$(addsuffix .so, $(addprefix lib, $(LIB_NAME)))

PRINTF_LIB_STATIC	:=	$(addsuffix .a, $(addprefix lib, $(PRINTF_LIB_NAME)))
PRINTF_LIB_DYNAMIC	:=	$(addsuffix .so, $(addprefix lib, $(PRINTF_LIB_NAME)))

ALL_LIBS			:=	$(LIB_STATIC)			\
						$(LIB_DYNAMIC)			\
						$(PRINTF_LIB_STATIC)	\
						$(PRINTF_LIB_DYNAMIC)

SRCS_DIR			:=	srcs
PRINTF_DIR			:=	$(SRCS_DIR)/printing/ft_printf
GNL_DIR				:=	$(SRCS_DIR)/get_next_line

OBJS_DIR			:=	objs

INCL_DIR			:=	includes

VPATH				:=	$(SRCS_DIR)/chars:				\
						$(SRCS_DIR)/printing:			\
						$(SRCS_DIR)/linked_lists:		\
						$(SRCS_DIR)/memory:				\
						$(SRCS_DIR)/strings:			\
						$(SRCS_DIR)/numbers:			\
						$(PRINTF_DIR):					\
						$(GNL_DIR)

LIB_SRCS		:= 	ft_isalpha.c			\
					ft_isdigit.c			\
					ft_isalnum.c			\
					ft_isprint.c			\
					ft_isascii.c			\
					ft_iswhitespace.c		\
					ft_toupper.c			\
					ft_tolower.c			\
					ft_strlen.c				\
					ft_strchr.c				\
					ft_strrchr.c			\
					ft_strchrnul.c			\
					ft_strncmp.c			\
					ft_strnstr.c			\
					ft_atoi.c				\
					ft_atof.c				\
					ft_strlcpy.c			\
					ft_strlcat.c			\
					ft_bzero.c				\
					free_double_pointer.c	\
					ft_memset.c				\
					ft_memchr.c				\
					ft_memcmp.c				\
					ft_memcpy.c				\
					ft_memmove.c			\
					ft_calloc.c				\
					ft_strdup.c				\
					ft_strndup.c			\
					ft_substr.c				\
					ft_strjoin.c			\
					ft_strtrim.c			\
					ft_split.c				\
					ft_split_set.c			\
					ft_itoa.c				\
					ft_itoab.c				\
					ft_strmapi.c			\
					ft_striteri.c			\
					ft_putchar_fd.c			\
					ft_putstr_fd.c			\
					ft_putendl_fd.c			\
					ft_putnbr_fd.c			\
					ft_lstnew.c				\
					ft_lstsize.c			\
					ft_lstlast.c			\
					ft_lstadd_front.c		\
					ft_lstadd_back.c		\
					ft_lstdelone.c			\
					ft_lstclear.c			\
					ft_lstiter.c			\
					ft_lstmap.c				\
					ft_min.c				\
					ft_max.c				\
					ft_fmin.c				\
					ft_fmax.c

PRINTF_SRCS		:=	ft_printf.c			\
					print_formatted.c	\
					numbers_output.c	\
					strings_output.c

GNL_SRCS		:=	get_next_line_bonus.c

LIB_OBJS		:=	$(addprefix $(OBJS_DIR)/, $(LIB_SRCS:.c=.o) $(GNL_SRCS:.c=.o))
PRINTF_OBJS		:=	$(addprefix $(OBJS_DIR)/, $(PRINTF_SRCS:.c=.o))
ALL_OBJS		:=	$(LIB_OBJS) $(PRINTF_OBJS)

CC				:=	gcc
IFLAGS			:=	-I $(INCL_DIR)
CFLAGS			:=	-g -Werror -Wall -Wextra

AR				:=	ar rcs

RM				:=	rm -rf


all:		$(LIB_STATIC) $(LIB_DYNAMIC)


$(LIB_STATIC):	$(ALL_OBJS) | $(OBJS_DIR)
	@$(AR) $@ $(ALL_OBJS)
	@echo "Created $@ static library !"

$(LIB_DYNAMIC):	$(ALL_OBJS) | $(OBJS_DIR)
	@$(CC) -shared -o $@ $(ALL_OBJS)
	@echo "Created $@ dynamic library !"


printf:	$(PRINTF_LIB_STATIC) $(PRINTF_LIB_DYNAMIC)

$(PRINTF_LIB_STATIC):	$(PRINTF_OBJS) | $(OBJS_DIR)
	@$(AR) $@ $(PRINTF_OBJS)
	@echo "Created $@ static library !"

$(PRINTF_LIB_DYNAMIC):	$(PRINTF_OBJS) | $(OBJS_DIR)
	@$(CC) -shared -o $@ $(PRINTF_OBJS)
	@echo "Created $@ dynamic library !"


$(OBJS_DIR):
	@mkdir $(OBJS_DIR)
	@echo "Created missing $(OBJS_DIR)/ directory"

$(OBJS_DIR)/%.o:	%.c | $(OBJS_DIR)
	@$(CC) $(CFLAGS) -c $< -o $@ $(IFLAGS)
	@echo "Compiled $@ object file !"


clean-lib:
ifeq ($(shell [ `ls $(LIB_OBJS) 2> /dev/null | wc -l` -ne 0 ]\
		&& echo true || echo false), true)
	$(RM) $(LIB_OBJS)
endif

clean-printf:
ifeq ($(shell [ `ls $(PRINTF_OBJS) 2> /dev/null | wc -l` -ne 0 ]\
		&& echo true || echo false), true)
	$(RM) $(PRINTF_OBJS)
endif

clean:	clean-lib clean-printf


fclean-lib:	clean-lib
ifeq ($(shell [ `ls $(LIB_STATIC) $(LIB_DYNAMIC) 2> /dev/null\
		| wc -l` -ne 0 ] && echo true || echo false), true)
	$(RM) $(LIB_STATIC) $(LIB_DYNAMIC)
endif

fclean-printf:	clean-printf
ifeq ($(shell [ `ls $(PRINTF_LIB_STATIC) $(PRINTF_LIB_DYNAMIC) 2> /dev/null\
		| wc -l` -ne 0 ] && echo true || echo false), true)
	$(RM) $(PRINTF_LIB_STATIC) $(PRINTF_LIB_DYNAMIC)
endif

fclean:	fclean-lib fclean-printf


ifeq ($(shell [ -d $(OBJS_DIR) ] && echo true || echo false), true)
dclean:	clean
	$(RM) $(OBJS_DIR)
endif


re-printf:	fclean-printf printf

re:			fclean all


.PHONY:		all printf clean clean-lib clean-printf fclean fclean-lib	\
			fclean-printf dclean re re-printf
