#ifndef FT_PUSH_SWAP_H
# define FT_PUSH_SWAP_H

# include "libft/libft.h"

typedef struct	s_pw
{
	int	*arr;
	int count;
}	t_pw;

int			ft_check_input(char **argv, int argc);
int			ft_check_duplicate(t_pw *arr);
int			ft_check_is_sorted(t_pw *arr);

#endif
