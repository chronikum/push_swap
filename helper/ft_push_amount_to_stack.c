/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_amount_to_stack.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 14:15:59 by jfritz            #+#    #+#             */
/*   Updated: 2021/09/18 15:13:51 by jfritz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

void	ft_pan(t_pw **arr, int amount)
{
	t_val *a;
	t_val *b;
	int counter;

	counter = 0;

	a = (*(*arr)->a);
	b = (*(*arr)->b);
	while (ft_lstvalsize(b) != 0 && counter < amount)
	{
		write(1, "pa\n", 3);
		ft_lstvaladd_front((*arr)->a, ft_lstvalnew(b->value, b->index));
		(*(*arr)->b) = (*(*arr)->b)->next;
		counter++;
	}
}

void	ft_pbn(t_pw **arr, int amount)
{
	t_val *a;
	t_val *b;
	int counter;

	counter = 0;

	a = (*(*arr)->b);
	b = (*(*arr)->a);
	while (ft_lstvalsize(b) != 0 && counter < amount)
	{
		write(1, "pb\n", 3);
		ft_lstvaladd_front((*arr)->b, ft_lstvalnew(b->value, b->index));
		(*(*arr)->b) = (*(*arr)->b)->next;
		counter++;
	}
}
