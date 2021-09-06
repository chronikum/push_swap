#ifndef FT_PUSH_SWAP_H
# define FT_PUSH_SWAP_H

# include "libft/libft.h"
# include <stdio.h>

typedef struct s_pw
{
	int	*arr;
	t_list **a;
	t_list **b;
	int	*or_arr;
	int	count;
	int	argc;
	t_list *ops;
}	t_pw;

int			ft_check_input(char **argv, int argc);
int			ft_check_duplicate(t_pw *arr);
int			ft_check_is_sorted(t_pw *arr);

void		ft_init_helper_array(int i[3]);
int			ft_number_total(char **argv, int argc);
int			ft_exit_error(void);

void		ft_free_and_increase_counter(int *total, int *inner, char ***split);

void		ft_arr_lnklst(t_pw **pw);

void		ft_sa(t_pw **arr);
void		ft_sb(t_pw **arr);
void		ft_ss(t_pw **arr);

#endif
