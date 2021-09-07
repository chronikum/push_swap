/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 11:50:40 by jfritz            #+#    #+#             */
/*   Updated: 2021/09/07 15:38:40 by jfritz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

void	ft_pa(t_pw **arr)
{
	int c;

	if (ft_lstvalsize((*(*arr)->b)) != 0)
	{
		c = (*(*arr)->b)->value;
		ft_lstvaladd_front((*arr)->a, ft_lstvalnew(c));
		(*(*arr)->b) = (*(*arr)->b)->next;
	}
}
