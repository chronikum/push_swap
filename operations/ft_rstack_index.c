/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rstack_index.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 08:57:34 by jfritz            #+#    #+#             */
/*   Updated: 2021/09/13 09:23:17 by jfritz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

/*
**	Rotates a stack until a certain position is on the top
**	by moving an specific amount of elements
**	returns the count of th actual moved elements
*/
int	ft_rstack_index(t_val **stack, int amount, int a)
{
	int count;
	t_val *first;

	count = 0;
	while ((count < amount))
	{
		if (ft_lstvalsize((*stack)) > 1)
			return count;
		if (a == 1)
			write(1, "ra\n", 3);
		else
			write(1, "rb\n", 3);
		first = (*stack);
		ft_lstvaladd_back(stack, ft_lstvalnew(first->value));
		(*stack) = (*stack)->next;
		count++;
	}

	return count;
}