/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorter.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 08:40:16 by jfritz            #+#    #+#             */
/*   Updated: 2021/09/19 11:02:27 by jfritz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

/*
**	Sorts stack b in stack a. Used
**	when a stack has been splitted
*/
void	ft_half_sort(t_pw **arr)
{
	int		position;
	t_val	*biggest;

	while ((*(*arr)->b))
	{
		biggest = ft_get_biggest((*(*arr)->b));
		position = ft_find_position((*(*arr)->b), biggest->value);
		while (ft_get_biggest((*(*arr)->b))->value != (*(*arr)->b)->value)
		{
			if (position < ft_lstvalsize((*(*arr)->b)) / 2)
				ft_rb(arr);
			else
				ft_rrb(arr);
		}
		ft_pa(arr);
	}
}


/*
**	Halfs stack a and sorts them both
**	Appropiate for over 250 and counting
*/
void	ft_big_push(t_pw **arr)
{
	int	total;
	int	beginning1;
	int	beginning2;

	total = 0;
	while ((total <= (*arr)->count))
	{
		if ((*(*arr)->a)->index > ((*arr)->count / 2))
			ft_pb(arr);
		else
			ft_ra(arr);
		total++;
	}
	beginning1 = ft_get_biggest((*(*arr)->b))->value;
	beginning2 = ft_get_smallest((*(*arr)->b))->value;
	ft_half_sort(arr);
	while (beginning1 != (*(*arr)->a)->value)
		ft_rra(arr);
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
	if ((*pw)->count > 50 && (*pw)->count < 500)
		ft_big_push(pw);
	else
		ft_below_50((*pw));
}
