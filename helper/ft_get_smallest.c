/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_smallest.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 11:49:18 by jfritz            #+#    #+#             */
/*   Updated: 2021/09/10 12:03:12 by jfritz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

/*
**	Return the smallest value in the given list
**	and the index of the t_val
*/
t_val	*ft_get_smallest(t_val *l, int *i)
{
	t_val *smallest;
	t_val *next;
	int i1;

	i1 = 0;
	(*i) = 0;
	next = l;
	smallest = next;
	while (next)
	{
		if (smallest->value > next->value)
		{
			smallest = next;
			(*i) = i1;
		}
		next = next->next;
		i1++;
	}

	return smallest;
}
