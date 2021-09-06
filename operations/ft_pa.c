/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 11:50:40 by jfritz            #+#    #+#             */
/*   Updated: 2021/09/06 14:22:22 by jfritz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

void	ft_pa(t_pw **arr)
{
	int *c;

	if (ft_lstsize((*(*arr)->b)) != 0)
	{
		c = (*(*arr)->b)->content;
		ft_lstadd_front((*arr)->a, ft_lstnew(c));
		(*(*arr)->b) = (*(*arr)->b)->next;
	}
}