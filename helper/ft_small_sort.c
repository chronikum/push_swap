/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_small_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 12:03:44 by jfritz            #+#    #+#             */
/*   Updated: 2021/09/19 12:25:14 by jfritz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

/*
**	Checks if an array is reverse sorted
*/
static int	ft_check_three_rev_sorted(t_val *l)
{
	if (ft_get_smallest(l) == ft_lstvallast(l) &&
	ft_get_biggest(l) == l)
		return (1);
	return (0);
}

static	void	ft_sub_three(t_pw **arr)
{
	if (ft_check_three_rev_sorted((*(*arr)->a)))
	{
		while (!ft_check_stack_sorted((*(*arr)->a)))
		{
			if ((*(*arr)->a)->index > (*(*arr)->a)->next->index)
			{
				ft_sa(arr);
				ft_rra(arr);
			}
		}
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
		ft_sub_three(arr);
}
