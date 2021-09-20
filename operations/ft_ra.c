/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ra.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 14:23:24 by jfritz            #+#    #+#             */
/*   Updated: 2021/09/20 17:56:10 by jfritz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

/*
**	Move every element of a up by one index.
**	The first element becomes the last one.
*/
void	ft_ra(t_pw **arr)
{
	t_val *first;
	t_val *temp;

	if (ft_lstvalsize((*(*arr)->a)) > 1)
	{
		temp = (*(*arr)->a)->next;
		first = (*(*arr)->a);
		ft_lstvaladd_back((*arr)->a, ft_lstvalnew(first->value, first->index));
		free((*(*arr)->a));
		(*(*arr)->a) = temp;
		write(1, "ra\n", 3);
	}
}
