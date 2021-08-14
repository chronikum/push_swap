CC = gcc

NAME = push_swap

LIBFTNAME = libft.a

PUSH_SWAP = push_swap

CFLAGS = -Wall -Wextra -Werror

SRC = main.c

VALIDATION = ./validation/ft_check_input.c ./validation/ft_check_duplicate.c ./helper/ft_number_total.c \
./helper/ft_exit_with_error.c ./helper/ft_free_and_increase_counter.c

SORTED = ./sorting/ft_check_sorted.c

all: $(NAME)

${LIBFTNAME}:
	make -C ./libft/
	mv ./libft/${LIBFTNAME} ./${LIBFTNAME}

${NAME}: ${LIBFTNAME}
	${CC} ${CFLAGS} ${SRC} ${VALIDATION} ${SORTED} ${LIBFTNAME} -o ${PUSH_SWAP}

bonus: libft
	${CC} ${CFLAGS} ${SRC} ${VALIDATION} ${SORTED} ${LIBFTNAME} -o ${PUSH_SWAP}

clean:
	rm -rf *.o

fclean: clean
	rm -f ${PUSH_SWAP} ${LIBFTNAME}
	make -C libft fclean

re: fclean ${LIBFTNAME} ${NAME}
