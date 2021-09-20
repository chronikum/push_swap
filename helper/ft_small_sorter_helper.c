/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_small_sorter_helper.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 13:09:01 by jfritz            #+#    #+#             */
/*   Updated: 2021/09/20 14:28:02 by jfritz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

/*
**	Checks if an array is reverse sorted
**	and if yes, sort it and return 1 if sorted fully
*/
int	ft_check_three_rev_sorted(t_pw **arr)
{
	if (ft_get_smallest((*(*arr)->a)) == ft_lstvallast((*(*arr)->a))
		&& ft_get_biggest((*(*arr)->a)) == (*(*arr)->a))
	{
		while (!ft_check_stack_sorted((*(*arr)->a)))
		{
			if ((*(*arr)->a)->index > (*(*arr)->a)->next->index)
			{
				ft_sa(arr);
				ft_rra(arr);
			}
		}
		return (1);
	}
	return (0);
}
