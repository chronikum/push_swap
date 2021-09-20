/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_big_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 16:59:10 by jfritz            #+#    #+#             */
/*   Updated: 2021/09/20 13:16:31 by jfritz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

void	ft_pre_sort(t_pw **arr)
{
	int total;

	total = 0;
	while (total < (*arr)->count)
	{
		ft_ra(arr);
		total++;
	}
}

/*
**	Quarters stack a and sorts them both
**	Appropiate for over 250 and counting
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

	ft_split_quarter(arr, 6, 3, beginning2);
	beginning1 = ft_get_biggest((*(*arr)->a))->index;
	beginning2 = ft_get_smallest((*(*arr)->b))->index;
	ft_half_sort(arr);
	while (beginning1 != (*(*arr)->a)->index)
		ft_rra(arr);
	ft_ra(arr);

	ft_split_quarter(arr, 6, 2, beginning2);
	beginning1 = ft_get_biggest((*(*arr)->a))->index;
	beginning2 = ft_get_smallest((*(*arr)->b))->index;
	ft_half_sort(arr);
	while (beginning1 != (*(*arr)->a)->index)
		ft_rra(arr);
	ft_ra(arr);

	ft_split_quarter(arr, 6, 1, beginning2);
	beginning1 = ft_get_biggest((*(*arr)->a))->index;
	beginning2 = ft_get_smallest((*(*arr)->b))->index;
	ft_half_sort(arr);
	while (beginning1 != (*(*arr)->a)->index)
		ft_rra(arr);
	ft_ra(arr);

	ft_split_quarter(arr, 6, 0, beginning2);
	beginning1 = ft_get_biggest((*(*arr)->a))->index;
	beginning2 = ft_get_smallest((*(*arr)->b))->index;
	ft_half_sort(arr);
	while (beginning1 != (*(*arr)->a)->index)
		ft_rra(arr);
	ft_ra(arr);



	// ft_split_quarter(arr, 5, 1, beginning2);
	// ft_half_sort(arr);
	// ft_ra(arr);

	// ft_ra(arr);
	// beginning1 = ft_get_smallest((*(*arr)->a))->index;
	// beginning2 = ft_get_smallest((*(*arr)->a))->index;
	// while (beginning1 != (*(*arr)->a)->index)
	// 	ft_ra(arr);
	// ft_half_sort(arr);
	// ft_split_quarter(arr, 1, beginning2);
	// ft_half_sort(arr);
	// beginning1 = ft_get_biggest((*(*arr)->a))->index;
	// beginning2 = (*(*arr)->a)->index;
	// while (beginning1 != ft_lstvallast((*(*arr)->a))->index)
	// 	ft_ra(arr);
	// while (beginning2 != (*(*arr)->a)->index)
	// 	ft_pb(arr);
	// ft_half_sort(arr);
}
