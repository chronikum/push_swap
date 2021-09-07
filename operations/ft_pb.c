/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 11:59:02 by jfritz            #+#    #+#             */
/*   Updated: 2021/09/07 18:12:27 by jfritz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

void	ft_pb(t_pw **arr)
{
	t_val *r;

	if (ft_lstvalsize((*(*arr)->a)) != 0)
	{
		r = (*(*arr)->a);
		ft_lstvaladd_front((*arr)->b, ft_lstvalnew(r->value));
		(*(*arr)->a) = (*(*arr)->a)->next;
	}
}
