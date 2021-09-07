/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rra.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 11:38:31 by jfritz            #+#    #+#             */
/*   Updated: 2021/09/07 16:37:39 by jfritz           ###   ########.fr       */
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
	int size;
	t_val *last;
	t_val *prelast;
	l = (*(*arr)->a);
	size = ft_lstvalsize(l);
	last = ft_lstvallast(l);
	ft_lstvaladd_front((*arr)->a, ft_lstvalnew(last->value));
	prelast = ft_lstvalindex((*(*arr)->a), (size - 1));
	prelast->next = NULL;
}
