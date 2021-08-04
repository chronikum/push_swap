CC = gcc

NAME = push_swap

LIBFTNAME = libft.a

PUSH_SWAP = push_swap.a

CFLAGS = -Wall -Wextra -Werror

SRC = main.c

all: $(NAME)

libft:
	make -C ./libft/
	mv ./libft/${LIBFTNAME} ${LIBFTNAME}

${NAME}: libft
	${CC} ${CFLAGS} ${SRC} ${LIBFTNAME} -o ${PUSH_SWAP}

bonus: libft
	${CC} ${CFLAGS} ${SRC} ${LIBFTNAME} -o ${PUSH_SWAP}

clean:
	rm -rf *.o

fclean: clean
	make -C libft fclean
	rm -f ${PUSH_SWAP}

re: fclean ${NAME}