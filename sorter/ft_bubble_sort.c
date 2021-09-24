/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bubble_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 12:32:41 by jfritz            #+#    #+#             */
/*   Updated: 2021/09/24 10:28:12 by jfritz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

/*
**	Swap ints
*/
static void	ft_swap_ints(int *x_p, int *y_p)
{
	int	temp;

	temp = (*x_p);
	(*x_p) = (*y_p);
	(*y_p) = temp;
}

/*
**	By using bubble sort we can index all values and add additional
**	information to the element in the stack.
*/
void	ft_bubble_sort(int arr[], int n)
{
	int	i;
	int	j;

	if (!arr)
		return ;
	i = 0;
	while (i < n - 1)
	{
		j = 0;
		while (j < n - i - 1)
		{
			if (arr[j] > arr[j + 1])
				ft_swap_ints(&arr[j], &arr[j + 1]);
			j++;
		}
		i++;
	}
}
