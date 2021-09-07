/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ra.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 14:23:24 by jfritz            #+#    #+#             */
/*   Updated: 2021/09/07 18:43:23 by jfritz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

/*
**	Move every element of a up by one index.
**	The first element becomes the last one.
*/
void	ft_ra(t_pw **arr)
{
	t_val *a;
	int f;

	if (!(ft_lstvalsize((*(*arr)->a)) < 1))
		return ;
	a = (*(*arr)->a);
	f = (*(*arr)->a)->value;
	(*(*arr)->a) = (*(*arr)->a)->next;
	ft_lstvaladd_back((*arr)->a, ft_lstvalnew(f));
}
