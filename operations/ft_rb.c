/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 11:33:18 by jfritz            #+#    #+#             */
/*   Updated: 2021/09/18 15:12:38 by jfritz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

/*
**	Move every element of a up by one index. (stack b)
**	The first element becomes the last one.
*/
void	ft_rb(t_pw **arr)
{
	t_val *first;

	if (ft_lstvalsize((*(*arr)->b)) > 1)
	{
		first = (*(*arr)->b);
		ft_lstvaladd_back((*arr)->b, ft_lstvalnew(first->value, first->index));
		(*(*arr)->b) = (*(*arr)->b)->next;
		write(1, "rb\n", 3);
	}
}
