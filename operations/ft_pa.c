/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 11:50:40 by jfritz            #+#    #+#             */
/*   Updated: 2021/09/16 13:21:52 by jfritz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

/*
**	Push the first element of b to the top of a
*/
void	ft_pa(t_pw **arr)
{
	t_val *a;
	t_val *b;

	a = (*(*arr)->a);
	b = (*(*arr)->b);
	if (ft_lstvalsize(b) != 0)
	{
		ft_lstvaladd_front((*arr)->a, ft_lstvalnew(b->value));
		(*(*arr)->b) = (*(*arr)->b)->next;
		write(1, "pa\n", 3);
	}
}
