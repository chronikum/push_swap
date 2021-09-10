/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 11:59:02 by jfritz            #+#    #+#             */
/*   Updated: 2021/09/10 12:07:44 by jfritz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

/*
**	Push the first element of a to the top of b
*/
void	ft_pb(t_pw **arr)
{
	t_val *a;
	t_val *b;

	a = (*(*arr)->a);
	b = (*(*arr)->b);
	if (ft_lstvalsize(a) != 0)
	{
		write(1, "pb\n", 3);
		ft_lstvaladd_front((*arr)->b, ft_lstvalnew(a->value));
		(*(*arr)->a) = (*(*arr)->a)->next;
	}
}
