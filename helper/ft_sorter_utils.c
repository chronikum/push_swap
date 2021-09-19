/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorter_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 11:56:38 by jfritz            #+#    #+#             */
/*   Updated: 2021/09/19 11:57:17 by jfritz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"


/*
**	Splits stack a in half using the index
**	value of every element
*/
void	ft_split_half(t_pw **arr)
{
	int	total;

	total = 0;
	while ((total <= (*arr)->count))
	{
		if ((*(*arr)->a)->index > ((*arr)->count / 2))
			ft_pb(arr);
		else
			ft_ra(arr);
		total++;
	}
}

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
			if (position <= ft_lstvalsize((*(*arr)->b)) / 2)
				ft_rb(arr);
			else
				ft_rrb(arr);
		}
		ft_pa(arr);
	}
}
