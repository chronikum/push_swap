/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 11:52:10 by jfritz            #+#    #+#             */
/*   Updated: 2021/09/23 16:08:23 by jfritz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

#include "../ft_push_swap.h"

/*
**	Reverse rotate staack b
**	The last element becomes the first one.
*/
void	ft_rrb(t_pw **arr)
{
	t_val	*l;

	l = (*(*arr)->b);
	if (ft_lstvalsize(l) > 1)
	{
		ft_lstvaladd_front((*arr)->b,
			ft_lstvalnew(ft_lstvallast(l)->value, ft_lstvallast(l)->index));
		free(ft_lstvallast((*(*arr)->b)));
		ft_lstvalindex((*(*arr)->b), (ft_lstvalsize(l) - 1))->next = NULL;
		write(1, "rrb\n", 4);
	}
}
