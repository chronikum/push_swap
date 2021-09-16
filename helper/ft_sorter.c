/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorter.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 08:40:16 by jfritz            #+#    #+#             */
/*   Updated: 2021/09/16 15:34:33 by jfritz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../ft_push_swap.h"


static int	ft_find_order(t_val *l, int x)
{
	t_val *next;
	int counter;

	counter = 0;
	next = l;
	if (ft_get_smallest(l)->value > x)
		return (0);
	if (ft_get_biggest(l)->value < x)
		return (ft_lstvalsize(l));
	while (next)
	{
		if (next->next)
		{
			if (next->value < x && next->next->value > x)
				return (counter);
		}
		else
		{
			if (ft_lstvalsize(l) == 1)
			{
				if (next->value > x)
					return (0);
				else
					return (1);
			}
		}
		counter++;
		next = next->next;
	}
	return (counter);
}

void	ft_sequential_push(t_pw **arr, int s)
{
	int sp;
	int ih;
	int	total;
	int already;

	ih = 0;
	total = 0;
	already = 0;
	while (total <= (*arr)->count && s)
	{
		while ((ft_lstvalsize((*(*arr)->b)) < 20))
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
			already++;
			if (ih == 0)
				ft_rrb(arr);
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
	splitter = 2;
	if (((*pw)->count) > 50)
		splitter = 10;
	if (((*pw)->count) > 50)
		splitter = 25;

	if (((*pw)->count) > 250)
		splitter = 50;
	if (((*pw)->count) >= 500)
		splitter = 100;

	ft_sequential_push(pw, splitter);
}