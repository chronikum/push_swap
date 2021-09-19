/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_below_50.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 09:00:51 by jfritz            #+#    #+#             */
/*   Updated: 2021/09/19 13:55:23 by jfritz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

/*
**	Sort below 50
*/
void	ft_below_50(t_pw *arr)
{
	while (ft_lstvalsize((*arr->a)) != 0)
		ft_pb(&arr);
	while (ft_lstvalsize((*arr->b)) != 0)
	{
		t_val *biggest = ft_get_biggest((*arr->b));
		int position = ft_find_position((*arr->b), biggest->value);
		while ((*arr->b)->value != biggest->value)
		{
			if (position < (ft_lstvalsize((*arr->b)) / 2))
				ft_rb(&arr);
			else
				ft_rrb(&arr);
		}
		ft_pa(&arr);
	}
}
