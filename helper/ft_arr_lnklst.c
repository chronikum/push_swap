/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arr_lnklst.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 09:25:51 by jfritz            #+#    #+#             */
/*   Updated: 2021/09/07 18:02:26 by jfritz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

/*
**	Fills the linked list a in the t_pw struct with the numbers
**	of int array arr. Also mallocs the empty b stack.
*/
void	ft_arr_lnklst(t_pw **pw)
{
	t_val *a;
	int i;

	i = 0;
	(*pw)->b = malloc(sizeof(t_val));
	// (*(*pw)->b) = ft_lstvalnew(0);
	(*pw)->started_b = 0;
	while (i < (*pw)->count)
	{
		if (i == 0)
			a = ft_lstvalnew((int) (*pw)->arr[0]);
		else
			ft_lstvaladd_back(&a, ft_lstvalnew((int) (*pw)->arr[i]));
		i++;
	}
	(*pw)->a = &a;
}
