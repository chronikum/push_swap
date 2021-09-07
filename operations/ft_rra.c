/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rra.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 11:38:31 by jfritz            #+#    #+#             */
/*   Updated: 2021/09/07 15:44:04 by jfritz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

/*
**	Reverse rotate staack a
**	The last element becomes the first one.
*/
void	ft_rra(t_pw **arr)
{
	int size;
	t_val *prelast;
	size = ft_lstvalsize((*(*arr)->a));
	ft_lstvaladd_front((*arr)->a, ft_lstvalnew(ft_lstvallast((*(*arr)->a))->value));
	prelast = ft_lstvalindex((*(*arr)->a), (size - 1));
	prelast->next = NULL;
}
