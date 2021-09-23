/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 10:51:43 by jfritz            #+#    #+#             */
/*   Updated: 2021/09/23 17:01:50 by jfritz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUSH_SWAP_H
# define FT_PUSH_SWAP_H

# include "libft/libft.h"
# include <stdio.h>

typedef struct s_pw
{
	int		*arr;
	t_val	**a;
	t_val	**b;
	int		count;
}	t_pw;

int			ft_check_input(char **argv, int argc);
int			ft_check_duplicate(t_pw *arr);
int			ft_check_is_sorted(t_pw *arr);

void		ft_init_helper_array(int i[3]);
int			ft_number_total(char **argv, int argc);
int			ft_exit_error(void);

void		ft_free_and_increase_counter(int *total, int *inner);

int			ft_arr_lnklst(t_pw **pw);

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
int			ft_check_stack_sorted(t_val *l);

t_val		*ft_get_smallest(t_val *l);
t_val		*ft_get_biggest(t_val *l);
t_val		*ft_biggest_until(t_val *l, int x);
int			ft_find_position(t_val *l, int needle);
t_val		*ft_lstvalbyindex(t_val *lst, int index);

void		ft_sorter(t_pw **pw);
void		ft_half_sort(t_pw **arr);
void		ft_split_half(t_pw **arr);
void		ft_split_quarter(t_pw **arr, int d, int q, int stopper);
void		ft_small_sort(t_pw **arr);
int			ft_check_three_rev_sorted(t_pw **arr);

void		ft_bigger_push(t_pw **arr);

void		ft_below_50(t_pw *arr);

void		ft_bubble_sort(int arr[], int n);

void		ft_rrl(t_val **l, int is_a);
void		ft_clear(t_val **l);

int			ft_double_free(char	**string);
void		ft_single_free(char **string);
int			ft_atoi_free(char *str);

int			ft_arg_is_string(char *arg);

#endif
