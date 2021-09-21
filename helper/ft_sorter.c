/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorter.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 08:40:16 by jfritz            #+#    #+#             */
/*   Updated: 2021/09/21 15:27:02 by jfritz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

void	ft_sorter(t_pw **pw)
{
	if ((*pw)->count > 1 && (*pw)->count < 6)
		ft_small_sort(pw);
	else
		ft_bigger_push(pw);
}
