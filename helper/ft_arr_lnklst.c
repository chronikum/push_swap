/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arr_lnklst.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 09:25:51 by jfritz            #+#    #+#             */
/*   Updated: 2021/09/21 15:10:59 by jfritz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

static int	ft_find_in_array(int *i, int needle, int size)
{
	int	counter;

	counter = 0;
	while (i[counter] != needle && counter < size)
		counter++;
	return (counter);
}

/*
**	Fills the linked list a in the t_pw struct with the numbers
**	of int array arr. Also mallocs the empty b stack.
*/
int	ft_arr_lnklst(t_pw **pw)
{
	t_val	**a;
	int		i;
	int		*array;
	int		index;

	i = 0;
	array = ft_memdup(((*pw)->arr), sizeof(int *) * (*pw)->count);
	printf("Total count: %d\n", (*pw)->count);
	ft_bubble_sort(array, (*pw)->count);
	(*pw)->b = malloc(sizeof(t_val));
	a = malloc(sizeof(t_val *));
	if (!array || !a || !(*pw)->b)
		return (0);
	while (i < (*pw)->count)
	{
		index = ft_find_in_array(array, (*pw)->arr[i], (*pw)->count);
		if (i == 0)
			(*a) = ft_lstvalnew((int)(*pw)->arr[0], index);
		else
			ft_lstvaladd_back(a, ft_lstvalnew((int)(*pw)->arr[i], index));
		i++;
	}
	(*pw)->a = a;
	free(array);
	return (1);
}
