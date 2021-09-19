/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_small_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 12:03:44 by jfritz            #+#    #+#             */
/*   Updated: 2021/09/19 15:37:19 by jfritz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

static int	ft_check_last_two(t_pw **arr)
{
	if (ft_lstvallast((*(*arr)->a)) != ft_get_smallest((*(*arr)->a))
		&& ((*(*arr)->a)) == ft_get_biggest((*(*arr)->a)))
	{
		ft_ra(arr);
		return (1);
	}
	return (0);
}

static	void	ft_sub_three(t_pw **arr)
{
	if (ft_check_three_rev_sorted(arr))
		return ;
	if (ft_check_last_two(arr))
		return ;
	if ((*(*arr)->a)->index > (*(*arr)->a)->next->index)
	{
		ft_sa(arr);
		return ;
	}
	if (ft_get_biggest((*(*arr)->a)) == (*(*arr)->a))
		ft_rra(arr);
	if (ft_get_smallest((*(*arr)->a)) == ft_lstvallast((*(*arr)->a)))
		ft_rra(arr);
	if (!ft_check_stack_sorted((*(*arr)->a)))
	{
		ft_rra(arr);
		ft_sa(arr);
	}
}

/*
**	Sorts total stack size of 5 using
**	sub_three as subfunction
*/
static void	ft_sort_five(t_pw **arr)
{
	while (ft_lstvalsize((*(*arr)->a)) != 3)
	{
		if ((*(*arr)->a)->index < ((*arr)->count / 2))
			ft_pb(arr);
		else
			ft_ra(arr);
	}
	if ((*(*arr)->b)->index < (*(*arr)->b)->next->index)
		ft_sb(arr);
	ft_sub_three(arr);
	ft_pa(arr);
	ft_pa(arr);
}

/*
**	Sorts value below 10
*/
void	ft_small_sort(t_pw **arr)
{
	if ((*(*arr)->a)->index > (*(*arr)->a)->next->index && (*arr)->count == 2)
		ft_sa(arr);
	else if ((*arr)->count < 4)
		ft_sub_three(arr);
	else if ((*arr)->count == 5)
		ft_sort_five(arr);
	else
		ft_below_50((*arr));
}
