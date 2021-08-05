/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_duplicate.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 09:29:41 by jfritz            #+#    #+#             */
/*   Updated: 2021/08/05 09:39:03 by jfritz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

/*
**	Returns 0 if there are any duplicates
**	in the given array
*/
int	ft_check_duplicate(int *array, int argc)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < (argc - 1))
	{
		j = (i + 1);
		while (j < argc) {
			if (array[i] == array[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
