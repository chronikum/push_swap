/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 11:33:18 by jfritz            #+#    #+#             */
/*   Updated: 2021/09/07 19:00:59 by jfritz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

/*
**	Move every element of a up by one index. (stack b)
**	The first element becomes the last one.
*/
void	ft_rb(t_pw **arr)
{
	t_val *a;
	int f;

	a = (*(*arr)->b);
	f = (*(*arr)->b)->value;
	(*(*arr)->b) = (*(*arr)->b)->next;
	ft_lstvaladd_back((*arr)->b, ft_lstvalnew(f));
}
