/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_and_increase_counter.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 15:20:55 by jfritz            #+#    #+#             */
/*   Updated: 2021/08/14 15:23:22 by jfritz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

void	ft_free_and_increase_counter(int *total, int *inner, char ***split)
{
	(*total) += ((*inner) - 1);
	free((*split));
}
