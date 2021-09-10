/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 11:53:05 by jfritz            #+#    #+#             */
/*   Updated: 2021/09/10 10:34:55 by jfritz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

/*
**	Reverse rotate stack a and stack b
**	at the same time.
*/
void	ft_rrr(t_pw **arr)
{
	ft_rra(arr);
	ft_rrb(arr);
}
