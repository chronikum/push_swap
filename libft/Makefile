# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/18 13:43:08 by jfritz            #+#    #+#              #
#    Updated: 2021/09/09 14:03:27 by jfritz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

NAME = libft.a

CFLAGS = -Wall -Wextra -Werror -g
OBJS := $(*.o)
SRC = ft_atoi.c ft_isalpha.c ft_itoa.c ft_memcpy.c ft_putendl_fd.c ft_strchr.c ft_strlcpy.c ft_strnstr.c ft_tolower.c \
ft_bzero.c ft_isascii.c ft_memccpy.c ft_memmove.c ft_putnbr_fd.c ft_strdup.c ft_strlen.c ft_strrchr.c ft_toupper.c \
ft_calloc.c ft_isdigit.c ft_memchr.c ft_memset.c ft_putstr_fd.c ft_strjoin.c ft_strmapi.c ft_strtrim.c \
ft_isalnum.c ft_isprint.c ft_memcmp.c ft_putchar_fd.c ft_split.c ft_strlcat.c ft_strncmp.c ft_substr.c


CUSTOM = ft_putunbr_fd.c ft_putunlong.c ft_putunlonglong.c ft_dec_to_hex.c ft_strupper.c ft_getlastchar.c \
ft_inset.c ft_strjoin_free.c ft_recursive_power.c ft_llatoi.c ft_memdup.c ft_lstvalnew.c ft_lstvalindex.c \
ft_lstvalsize.c ft_lstvaladd_front.c ft_lstvaladd_back.c ft_lstvallast.c \
ft_lstvaladd_front.c ft_lstvaldelone.c ft_lstvalclear.c ft_lstvaliter.c ft_lstvalmap.c

BNS = ft_lstnew.c ft_lstsize.c ft_lstadd_front.c ft_lstadd_back.c ft_lstlast.c \
ft_lstadd_front.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

all: $(NAME)

${NAME}:
	${CC} ${CFLAGS} -c ${SRC} ${CUSTOM} ${BNS}
	ar rc ${NAME} *.o

bonus:
	${CC} ${CFLAGS} -c ${SRC} ${CUSTOM} ${BNS}
	ar rc ${NAME} *.o

clean:
		rm -rf *.o

fclean: clean
	rm -f $(NAME)

re: clean ${NAME}
