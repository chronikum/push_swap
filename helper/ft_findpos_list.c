/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_findpos_list.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 13:34:07 by jfritz            #+#    #+#             */
/*   Updated: 2021/09/15 15:13:49 by jfritz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

/*
**	Returns the position in which n should be in list l when sorted ascending
*/
int	ft_findpos_list(t_val *l, int n)
{
	int	index;
	int chosen;
	t_val *list;

	index = 0;
	chosen = 0;
	list = l;
	while (list)
	{
		if (list->value > n)
			chosen = index;
		else
			return (chosen);
		list = list->next;
		index++;
	}
	return (index);
}