/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_smallest.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 11:49:18 by jfritz            #+#    #+#             */
/*   Updated: 2021/09/10 11:54:47 by jfritz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

/*
**	Return the smallest value in the given list
*/
t_val	*ft_get_smallest(t_val *l)
{
	t_val *smallest;
	t_val *next;

	next = l;
	smallest = next;
	while (next)
	{
		if (smallest->value > next->value)
			smallest = next;
		next = next->next;
	}

	return smallest;
}
