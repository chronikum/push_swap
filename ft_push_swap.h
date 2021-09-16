#ifndef FT_PUSH_SWAP_H
# define FT_PUSH_SWAP_H

# include "libft/libft.h"
# include <stdio.h>

typedef struct s_pw
{
	int	*arr;
	t_val **a;
	t_val **b;
	int started_b;
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
void		ft_pa(t_pw **arr);
void		ft_pb(t_pw **arr);
void		ft_ra(t_pw **arr);
void		ft_rb(t_pw **arr);
void		ft_rr(t_pw **arr);
void		ft_rra(t_pw **arr);
void		ft_rrb(t_pw **arr);
void		ft_rrr(t_pw **arr);

void		ft_pan(t_pw **arr, int amount);
void		ft_pbn(t_pw **arr, int amount);

int			ft_rstack_index(t_val **stack, int amount, int a);


void		ft_print_stack(t_val *t);
int			ft_check_stack_sorted(t_val *l);

t_val		*ft_get_smallest(t_val *l);
t_val		*ft_get_biggest(t_val *l);
t_val		*ft_biggest_until(t_val *l, int x);
int			ft_find_position(t_val *l, int needle);

int			ft_findpos_list(t_val *l, int n);
void		ft_sorter(t_pw **pw);

#endif
