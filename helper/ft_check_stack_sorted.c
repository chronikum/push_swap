/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_stack_sorted.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 10:36:32 by jfritz            #+#    #+#             */
/*   Updated: 2021/09/13 11:51:15 by jfritz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

int	ft_check_stack_sorted(t_val *l)
{
	t_val *s;
	int last;

	s = l;
	last = l->value;
	while (s)
	{
		if (last < s->next->value)
		{
			last = s->next->value;
			s = s->next;
		}
		else
			return (0);
		s = s->next;
	}
	return (1);
}
