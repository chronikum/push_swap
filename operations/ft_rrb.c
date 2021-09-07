/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 11:52:10 by jfritz            #+#    #+#             */
/*   Updated: 2021/09/07 15:43:48 by jfritz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

#include "../ft_push_swap.h"

/*
**	Reverse rotate staack b
**	The last element becomes the first one.
*/
void	ft_rrb(t_pw **arr)
{
	int size;
	t_val *prelast;
	size = ft_lstvalsize((*(*arr)->b));
	ft_lstvaladd_front((*arr)->b, ft_lstvalnew(ft_lstvallast((*(*arr)->b))->value));
	prelast = ft_lstvalindex((*(*arr)->b), (size - 1));
	prelast->next = NULL;
}
