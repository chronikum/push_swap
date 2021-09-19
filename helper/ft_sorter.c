/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorter.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 08:40:16 by jfritz            #+#    #+#             */
/*   Updated: 2021/09/19 16:14:31 by jfritz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

/*
**	Halfs stack a and sorts them both
**	Appropiate for over 250 and counting
*/
static void	ft_big_push(t_pw **arr)
{
	int	beginning1;
	int	beginning2;

	ft_split_half(arr);
	beginning1 = ft_get_biggest((*(*arr)->b))->value;
	beginning2 = ft_get_smallest((*(*arr)->b))->value;
	ft_half_sort(arr);
	while (beginning1 != (*(*arr)->a)->value)
		ft_ra(arr);
	ft_ra(arr);
	while ((*(*arr)->a)->value != beginning2)
	{
		if ((*(*arr)->a)->index > (((*arr)->count / 2) / 2))
			ft_pb(arr);
		else
			ft_ra(arr);
	}
	beginning1 = ft_get_biggest((*(*arr)->a))->value;
	ft_half_sort(arr);
	while (ft_lstvallast((*(*arr)->a))->value != beginning1)
	{
		ft_rra(arr);
		ft_pb(arr);
	}
	ft_half_sort(arr);
}

/*
**	Halfs stack a and sorts them both
**	Appropiate for over 250 and counting
*/
static void	ft_bigger_push(t_pw **arr)
{
	int	beginning1;
	int	beginning2;

	ft_split_half(arr);
	beginning1 = ft_get_biggest((*(*arr)->b))->value;
	beginning2 = ft_get_smallest((*(*arr)->b))->value;
	ft_half_sort(arr);
	while (beginning1 != (*(*arr)->a)->value)
		ft_ra(arr);
	ft_ra(arr);
	while ((*(*arr)->a)->value != beginning2)
	{
		if ((*(*arr)->a)->index > (((*arr)->count / 2) / 2))
			ft_pb(arr);
		else
			ft_ra(arr);
	}
	beginning1 = ft_get_biggest((*(*arr)->a))->value;
	ft_half_sort(arr);
	while (ft_lstvallast((*(*arr)->a))->value != beginning1)
	{
		ft_rra(arr);
		ft_pb(arr);
	}
	ft_half_sort(arr);
}

void	ft_sorter(t_pw **pw)
{
	if ((*pw)->count > 1 && (*pw)->count < 11)
		ft_small_sort(pw);
	else if ((*pw)->count > 10 && (*pw)->count < 250)
		ft_big_push(pw);
	else
		ft_bigger_push(pw);
}
