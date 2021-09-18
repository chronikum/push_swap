/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stoip.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 12:40:58 by jfritz            #+#    #+#             */
/*   Updated: 2021/09/18 13:05:33 by jfritz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

/*
**	Prints the given stack
*/
void	ft_stoip(t_val *t, int **res)
{
	t_val *tmp;
	int x;
	int count;

	count = 0;
	tmp = t;
	if (ft_lstvalsize(t) == 0)
		return ;
	while (tmp)
	{
		x = tmp->value;
		(*res)[count] = x;
		tmp = tmp->next;
		count++;
	}
}
