/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_biggest_until.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 09:40:51 by jfritz            #+#    #+#             */
/*   Updated: 2021/09/13 09:43:31 by jfritz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

/*
**	Return the biggest value in the given list
*/
t_val	*ft_biggest_until(t_val *l, int amount)
{
	t_val *biggest;
	t_val *next;
	int count;


	count = 0;
	next = l;
	biggest = next;
	while (next && (count < amount))
	{
		if (biggest->value < next->value)
			biggest = next;
		next = next->next;
		count++;
	}

	return biggest;
}