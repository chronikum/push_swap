/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_biggest.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 12:18:21 by jfritz            #+#    #+#             */
/*   Updated: 2021/09/10 12:18:58 by jfritz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

/*
**	Return the biggest value in the given list
*/
t_val	*ft_get_biggest(t_val *l)
{
	t_val *biggest;
	t_val *next;

	next = l;
	biggest = next;
	while (next)
	{
		if (biggest->value < next->value)
			biggest = next;
		next = next->next;
	}

	return biggest;
}
