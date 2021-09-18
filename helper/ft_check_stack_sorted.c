/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_stack_sorted.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 10:36:32 by jfritz            #+#    #+#             */
/*   Updated: 2021/09/18 09:43:41 by jfritz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

int	ft_check_stack_sorted(t_val *l)
{
	t_val		*t;

	if (!l)
		return (0);
	t = l;
	while (t->next)
	{
		if (t->value > t->next->value)
			return (0);
		t = t->next;
	}
	return (1);
}
