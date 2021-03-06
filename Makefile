CC = gcc

NAME = push_swap

LIBFTNAME = libft.a

PUSH_SWAP = push_swap

CFLAGS = -Wall -Wextra -Werror

SRC = main.c

VALIDATION = ./validation/ft_check_input.c ./validation/ft_check_duplicate.c ./helper/ft_number_total.c \
./helper/ft_exit_with_error.c ./helper/ft_free_and_increase_counter.c ./helper/ft_arr_lnklst.c ./helper/ft_sorter_utils.c \
./helper/ft_free_list.c ./helper/ft_free_helper.c ./helper/ft_atoi_free.c

SORTED = ./sorting/ft_check_sorted.c ./helper/ft_check_stack_sorted.c ./helper/ft_get_smallest.c ./helper/ft_get_biggest.c ./helper/ft_find_position.c \
./helper/ft_sorter.c ./helper/ft_below_50.c ./sorter/ft_bubble_sort.c ./helper/ft_small_sort.c ./helper/ft_small_sorter_helper.c ./helper/ft_big_sort.c \
./helper/ft_lstvalbyindex.c ./helper/ft_argument_is_string.c ./helper/ft_small_big_sort.c

OPERATIONS = ./operations/ft_sa.c ./operations/ft_sb.c ./operations/ft_ss.c ./operations/ft_pa.c ./operations/ft_pb.c ./operations/ft_ra.c \
./operations/ft_rb.c ./operations/ft_rr.c ./operations/ft_rra.c ./operations/ft_rrb.c ./operations/ft_rrr.c
all: $(NAME)

${LIBFTNAME}:
	make -C ./libft/
	mv ./libft/${LIBFTNAME} ./${LIBFTNAME}

${NAME}: ${LIBFTNAME}
	${CC} ${CFLAGS} ${SRC} ${VALIDATION} ${SORTED} ${LIBFTNAME} $(OPERATIONS) -o ${PUSH_SWAP}

bonus: libft
	${CC} ${CFLAGS} ${SRC} ${VALIDATION} ${SORTED} ${LIBFTNAME} $(OPERATIONS) -o ${PUSH_SWAP}

clean:
	rm -rf *.o

fclean: clean
	rm -f ${PUSH_SWAP} ${LIBFTNAME}
	make -C libft fclean

re: fclean ${LIBFTNAME} ${NAME}
