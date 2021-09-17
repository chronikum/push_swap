/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorter.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 08:40:16 by jfritz            #+#    #+#             */
/*   Updated: 2021/09/17 09:04:56 by jfritz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../ft_push_swap.h"

/*
**	Returns the index the value should be in
*/
static int	ft_find_order(t_val *l, int x)
{
	t_val *next;
	int counter;

	counter = 0;
	next = l;
	if (ft_get_smallest(l)->value > x)
		return (0);
	if (ft_get_biggest(l)->value < x)
		return (ft_lstvalsize(l) - 1);
	while (next)
	{
		if (next->next)
		{
			if (next->value < x && next->next->value > x)
				return (counter);
		}
		else
		{
			// if (ft_lstvalsize(l) == 1)
			// {
			// 	if (next->value > x)
			// 		return (0);
			// 	else
			// 		return (1);
			// }
		}
		counter++;
		next = next->next;
	}
	return (counter - 1);
}

void	ft_sequential_push(t_pw **arr, int s)
{
	int sp;
	int ih;
	int	total;
	int already;
	int last_iter;

	ih = 0;
	total = 0;
	already = 0;
	while (total <= (*arr)->count)
	{
		last_iter = 0;
		while ((ft_lstvalsize((*(*arr)->b)) < s) && (*(*arr)->a))
		{
			total++;
			if ((*(*arr)->b))
			{
				sp = ft_find_order((*(*arr)->b), (*(*arr)->a)->value);
				while (ih != (sp + 1))
				{
					ft_rb(arr);
					ih++;
				}
			}
			ft_pb(arr);
			last_iter++;
			already++;
			// if (ih == 0)
			// 	ft_rrb(arr);
			while (ih != 0)
			{
				ft_rrb(arr);
				ih--;
			}
		}
		while ((ft_lstvalsize((*(*arr)->b)) != 0))
			ft_pa(arr);
		while (already != 0)
		{
			ft_rra(arr);
			already--;
		}
	}
}

void    ft_sorter(t_pw **pw)
{
	int	splitter;
	int	total;

	total = 0;
	splitter = 10;
	if (((*pw)->count) > 100)
		splitter = 20;
	if (((*pw)->count) > 250)
		splitter = 20;
	if (((*pw)->count) > 350)
		splitter = 30;
	if (((*pw)->count) >= 500)
		splitter = 15;
	if ((*pw)->count <= 50)
		ft_below_50((*pw));
	else
		ft_sequential_push(pw, splitter);
}