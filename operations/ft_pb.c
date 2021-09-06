/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 11:59:02 by jfritz            #+#    #+#             */
/*   Updated: 2021/09/06 14:22:29 by jfritz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

void	ft_pb(t_pw **arr)
{
	int *c;

	if (ft_lstsize((*(*arr)->a)) != 0)
	{
		c = (*(*arr)->a)->content;
		ft_lstadd_front((*arr)->b, ft_lstnew(c));
		(*(*arr)->a) = (*(*arr)->a)->next;
	}
}