/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arr_lnklst.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 09:25:51 by jfritz            #+#    #+#             */
/*   Updated: 2021/09/06 10:13:59 by jfritz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

/*
**	Fills the linked list a in the t_pw struct with the numbers
**	of int array arr
*/
void	ft_arr_lnklst(t_pw **pw)
{
	int i;

	i = 0;
	while (i < (*pw)->count)
	{
		if (i == 0)
			(*(*pw)->a) = ft_lstnew(&((*pw)->arr[0]));
		else
			ft_lstadd_back((*pw)->a, ft_lstnew(&((*pw)->arr[i])));
		i++;
	}
}