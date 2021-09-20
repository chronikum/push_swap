/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_big_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 16:59:10 by jfritz            #+#    #+#             */
/*   Updated: 2021/09/20 11:25:35 by jfritz           ###   ########.fr       */
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

	// ft_pre_sort(arr);
	ft_split_quarter(arr, 3, -1);
	beginning1 = ft_get_biggest((*(*arr)->b))->value;
	beginning2 = ft_get_smallest((*(*arr)->b))->value;
	ft_half_sort(arr);
	while (beginning1 != (*(*arr)->a)->value)
		ft_ra(arr);
	ft_ra(arr);
	ft_split_quarter(arr, 2, -1);
	beginning1 = ft_get_smallest((*(*arr)->a))->value;
	while (beginning1 != (*(*arr)->a)->value)
		ft_ra(arr);
	ft_half_sort(arr);
	ft_split_quarter(arr, 1, -1);
	ft_half_sort(arr);
	beginning1 = ft_get_biggest((*(*arr)->a))->value;
	beginning2 = (*(*arr)->a)->value;
	while (beginning1 != ft_lstvallast((*(*arr)->a))->value)
		ft_ra(arr);
	while (beginning2 != (*(*arr)->a)->value)
		ft_pb(arr);
	ft_half_sort(arr);
}
