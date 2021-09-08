/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 11:59:02 by jfritz            #+#    #+#             */
/*   Updated: 2021/09/08 10:41:04 by jfritz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

void	ft_pb(t_pw **arr)
{
	t_val *a;
	t_val *b;

	a = (*(*arr)->a);
	b = (*(*arr)->b);
	if (ft_lstvalsize(a) != 0)
	{
		ft_lstvaladd_front((*arr)->b, ft_lstvalnew(a->value));
		(*(*arr)->a) = (*(*arr)->a)->next;
	}
}
