/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 11:59:02 by jfritz            #+#    #+#             */
/*   Updated: 2021/09/20 19:35:47 by jfritz           ###   ########.fr       */
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
	t_val *temp;

	a = (*(*arr)->a);
	b = (*(*arr)->b);
	if (ft_lstvalsize(a) != 0)
	{
		temp = (*(*arr)->a)->next;
		ft_lstvaladd_front((*arr)->b, ft_lstvalnew(a->value, a->index));
		free((*(*arr)->a));
		(*(*arr)->a) = temp;
		write(1, "pb\n", 3);
	}
}
