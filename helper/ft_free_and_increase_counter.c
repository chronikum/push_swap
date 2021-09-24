/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_and_increase_counter.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 15:20:55 by jfritz            #+#    #+#             */
/*   Updated: 2021/09/24 08:59:24 by jfritz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

void	ft_free_and_increase_counter(int *total, int *inner, char **split)
{
	(*total) += ((*inner) - 1);
	ft_double_free(split);
}
