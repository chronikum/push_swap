/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ra.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 14:23:24 by jfritz            #+#    #+#             */
/*   Updated: 2021/09/09 15:55:53 by jfritz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

/*
**	Move every element of a up by one index.
**	The first element becomes the last one.
*/
void	ft_ra(t_pw **arr)
{
	t_val *first;

	first = (*(*arr)->a);
	ft_lstvaladd_back((*arr)->a, ft_lstvalnew(first->value));
	(*(*arr)->a) = (*(*arr)->a)->next;
}
