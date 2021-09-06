/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ra.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 14:23:24 by jfritz            #+#    #+#             */
/*   Updated: 2021/09/06 14:30:40 by jfritz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

/*
**	Move every element of a up by one index.
**	The first element becomes the last one.
*/
void	ft_ra(t_pw **arr)
{
	t_list *a;

	a = (*(*arr)->a);
	while ((*(*arr)->a))
	{
		a = a->next;
	}
}