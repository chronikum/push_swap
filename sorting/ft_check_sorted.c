/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_sorted.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 09:40:06 by jfritz            #+#    #+#             */
/*   Updated: 2021/08/14 14:35:12 by jfritz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

/*
**	Returns 1 if array is sorted
*/
int	ft_check_is_sorted(t_pw *arr)
{
	int	i;
	int	last;

	i = 0;
	last = arr->arr[0];
	while (i < (arr->count - 1))
	{
		if (last < arr->arr[(i + 1)])
			last = arr->arr[i + 1];
		else
			return (0);
		i++;
	}
	return (1);
}
