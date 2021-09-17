/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorter.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 08:40:16 by jfritz            #+#    #+#             */
/*   Updated: 2021/09/17 11:16:41 by jfritz           ###   ########.fr       */
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
		return (ft_lstvalsize(l));
	while (next)
	{
		if (next->next)
		{
			if (next->value < x && next->next->value > x)
				return (counter);
		}
		counter++;
		next = next->next;
	}
	return (counter - 1);
}

void	ft_sequential_push(t_pw **arr, int s, int remainer)
{
	int sp;
	int ih;
	int	total;
	int already;
	int last_iter;
	int	position;

	ih = 0;
	total = 0;
	already = 0;
	position = 0;
	while (total <= (*arr)->count && remainer)
	{
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
			else
				last_iter = 0;
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


	// // shit
	// while ((ft_lstvalsize((*(*arr)->a)) != remainer))
	// 	ft_pb(arr);
	// ft_below_50((*arr));
	// while (ft_lstvalsize((*(*arr)->b)) != 0)
	// {
	// 	sp = ft_find_order((*(*arr)->a), (*(*arr)->b)->value);
	// 	while (ih != (sp + 1))
	// 	{
	// 		ft_ra(arr);
	// 		ih++;
	// 	}
	// 	ft_pa(arr);
	// 	while (ih != 0)
	// 	{
	// 		ft_rra(arr);
	// 		ih--;
	// 	}
	// }
}

void    ft_sorter(t_pw **pw)
{
	int	splitter;
	int	total;
	int remainer;

	total = 0;
	splitter = 10;
	remainer = 10;
	if (((*pw)->count) >= 100)
	{
		splitter = 25;
		remainer = 10;
	}
	if (((*pw)->count) >= 200)
	{
		splitter = 10;
		remainer = 10;
	}
	if (((*pw)->count) > 350)
	{
		splitter = 30;
		remainer = 10;
	}
	if (((*pw)->count) >= 500)
	{
		splitter = 25;
		remainer = 10;
	}
	if ((*pw)->count <= 50)
		ft_below_50((*pw));
	else
		ft_sequential_push(pw, splitter, remainer);
}