/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rsort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 13:56:59 by jfritz            #+#    #+#             */
/*   Updated: 2021/09/18 15:47:52 by jfritz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

void	ft_rsort(t_pw **pw)
{
	int counter;

	counter = 0;
	while (!ft_check_stack_sorted((*(*pw)->a)))
	{
		if ((*(*pw)->a)->index < (*(*pw)->a)->next->index)
			ft_sa(pw);
	}
}
