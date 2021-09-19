/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_small_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 12:03:44 by jfritz            #+#    #+#             */
/*   Updated: 2021/09/19 13:53:20 by jfritz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

static int	ft_check_last_two(t_pw **arr)
{
	if (ft_lstvallast((*(*arr)->a)) != ft_get_smallest((*(*arr)->a)) &&
	((*(*arr)->a)) == ft_get_biggest((*(*arr)->a)))
	{
		ft_ra(arr);
		return (1);
	}
	return (0);
}

static	void	ft_sub_three(t_pw **arr)
{
	if (ft_check_three_rev_sorted(arr))
		return;
	if (ft_check_last_two(arr))
		return;
	if ((*(*arr)->a)->index > (*(*arr)->a)->next->index)
	{
		ft_sa(arr);
		return;
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

static	void	ft_sub_six(t_pw **arr)
{
	t_val *new;

	new = ft_get_biggest((*(*arr)->a));
	while ((!ft_check_stack_sorted((*(*arr)->a))) && new != (*(*arr)->a))
	{
		new = ft_biggest_until((*(*arr)->a), new->value);
		ft_rra(arr);
	}
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
	else
		ft_sub_six(arr);
}
