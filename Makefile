# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: merlich <merlich@student.21-school.ru>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/10 11:44:29 by merlich           #+#    #+#              #
#    Updated: 2021/11/14 17:12:22 by merlich          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a

LIBFT	=	libft/libft.a

LIBFT_SRCS	=	libft/ft_isalpha.c libft/ft_isdigit.c \
				libft/ft_isalnum.c libft/ft_isascii.c \
				libft/ft_isprint.c libft/ft_strlen.c \
				libft/ft_memset.c libft/ft_bzero.c \
				libft/ft_memcpy.c libft/ft_memmove.c \
				libft/ft_strlcpy.c libft/ft_strlcat.c \
				libft/ft_toupper.c libft/ft_tolower.c \
				libft/ft_strchr.c libft/ft_strrchr.c \
				libft/ft_strncmp.c libft/ft_memchr.c \
				libft/ft_memcmp.c libft/ft_strnstr.c \
				libft/ft_atoi.c libft/ft_calloc.c \
				libft/ft_strdup.c libft/ft_substr.c \
				libft/ft_strjoin.c libft/ft_strtrim.c \
				libft/ft_split.c libft/ft_itoa.c \
				libft/ft_strmapi.c libft/ft_striteri.c \
				libft/ft_putchar_fd.c libft/ft_putstr_fd.c \
				libft/ft_putendl_fd.c libft/ft_putnbr_fd.c

LIBFT_OBJS	=	${LIBFT_SRCS:.c=.o}

HEADER	=	ft_printf.h

SRCS	=	ft_printf.c characters.c numbers.c ft_num_len.c

OBJS	=	${SRCS:.c=.o}

D_FILES	=	${OBJS:.o=.d}

CLANG	=	clang

CFLAGS	=	-Wall -Wextra -Werror -MD

RM		=	rm -f

%.o:		%.c
			${CLANG} ${CFLAGS} -c $< -o $@

all:		${NAME}

$(LIBFT):	${LIBFT_SRCS} ${LIBFT_OBJS}
			make -C libft

$(NAME):	${OBJS} ${LIBFT} ${LIBFT_OBJS}
			ar rcs ${NAME} $?

-include ${D_FILES}

clean:
			make -C libft clean
			${RM} ${OBJS} ${D_FILES}

fclean:		clean
			make -C libft fclean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
