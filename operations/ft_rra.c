/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rra.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 11:38:31 by jfritz            #+#    #+#             */
/*   Updated: 2021/09/20 18:07:32 by jfritz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

/*
**	Reverse rotate staack a
**	The last element becomes the first one.
*/
void	ft_rra(t_pw **arr)
{
	t_val *l;

	l = (*(*arr)->a);
	if (ft_lstvalsize(l) > 1)
	{
		ft_lstvaladd_front((*arr)->a, ft_lstvalnew(ft_lstvallast(l)->value, ft_lstvallast(l)->index));
		free(ft_lstvallast((*(*arr)->a)));
		ft_lstvalindex((*(*arr)->a), (ft_lstvalsize(l) - 1))->next = NULL;
		write(1, "rra\n", 4);
	}
}
