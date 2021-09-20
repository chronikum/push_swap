/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_big_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 16:59:10 by jfritz            #+#    #+#             */
/*   Updated: 2021/09/20 14:22:29 by jfritz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

/*
**	Divides the given stack by amount and pre-determined index,
**	after that we check where each value should be and then
**	we rotate stack to the smallest b-previous number and sort it
**	on top starting with the biggest in stack b.
*/
void	ft_sort_part(t_pw **arr, int b1, int b2)
{
	int	d;
	int	n;

	d = 3;
	n = 6;
	while (d != -1)
	{
		ft_split_quarter(arr, n, d, b2);
		b1 = ft_get_biggest((*(*arr)->a))->index;
		b2 = ft_get_smallest((*(*arr)->b))->index;
		ft_half_sort(arr);
		while (b1 != (*(*arr)->a)->index)
			ft_rra(arr);
		ft_ra(arr);
		d--;
	}
}

/*
**	Sorts stack a using partitions
**	Creates by default 6 partitions
**	and sorts them seperatelz on the top
**	of the existing stack. Uses indexing
**	of values to determine stacks of different
**	index values, so we can start with the highest indexes
**	at the beginning.
*/
void	ft_bigger_push(t_pw **arr)
{
	int	beginning1;
	int	beginning2;

	ft_split_quarter(arr, 6, 5, -1000);
	beginning1 = ft_get_biggest((*(*arr)->b))->index;
	beginning2 = ft_get_smallest((*(*arr)->b))->index;
	ft_half_sort(arr);
	while (beginning1 != (*(*arr)->a)->index)
		ft_ra(arr);
	ft_ra(arr);
	ft_split_quarter(arr, 6, 4, beginning2);
	beginning1 = ft_get_biggest((*(*arr)->a))->index;
	beginning2 = ft_get_smallest((*(*arr)->b))->index;
	ft_half_sort(arr);
	while (beginning1 != (*(*arr)->a)->index)
		ft_ra(arr);
	ft_ra(arr);
	ft_sort_part(arr, beginning1, beginning2);
}
