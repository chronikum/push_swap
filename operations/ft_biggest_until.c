/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_biggest_until.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 09:40:51 by jfritz            #+#    #+#             */
/*   Updated: 2021/09/23 16:10:37 by jfritz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

/*
**	Return the biggest value position under the value x
*/
t_val	*ft_biggest_until(t_val *l, int x)
{
	t_val	*biggest;
	t_val	*next;
	int		count;

	count = 0;
	next = l;
	biggest = next;
	while (next)
	{
		if (biggest->index > x)
			return (next);
		if (biggest->index < next->index)
			biggest = next;
		next = next->next;
		count++;
	}
	return (NULL);
}
