/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 11:59:02 by jfritz            #+#    #+#             */
/*   Updated: 2021/09/07 15:44:32 by jfritz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

void	ft_pb(t_pw **arr)
{
	// int c;
	t_val *t;
	if (ft_lstvalsize((*(*arr)->a)) != 0)
	{
		t = (*(*arr)->a);
		// c = t->value;
		// ft_putstr_fd("TEST MICH", 1);
		// ft_putnbr_fd(c, 1);
		// ft_lstadd_front((*arr)->b, ft_lstnewval(c));
		// (*(*arr)->a) = (*(*arr)->a)->next;
	}
}
