/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_sorted.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 09:40:06 by jfritz            #+#    #+#             */
/*   Updated: 2021/08/05 10:02:30 by jfritz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

/*
**	Returns 1 if array is sorted
*/
int	ft_check_is_sorted(int *array, int argc)
{
	int i;
	int last;

	i = 0;
	last = array[0];
	while (i < (argc - 2))
	{
		if (last < array[(i + 1)])
			last = array[i];
		else
			return (0);
		i++;
	}
	return (1);
}
