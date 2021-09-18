/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorter.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 08:40:16 by jfritz            #+#    #+#             */
/*   Updated: 2021/09/18 16:09:08 by jfritz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../ft_push_swap.h"

/*
**	Returns the index the value should be in
*/
static int	ft_find_order(t_val *l, int x)
{
	int counter;
	t_val *tmp;

	counter = 0;
	tmp = l;
	if (ft_get_smallest(l)->value > x)
		return (0);
	if (ft_get_biggest(l)->value < x)
		return (ft_lstvalsize(l));
	while (tmp)
	{
		if (tmp->next)
		{
			if (tmp->value < x && tmp->next->value > x)
				return (counter);
		}
		counter++;
		tmp = tmp->next;
	}
	return (counter - 1);
}

// static int	ft_find_order2(t_val *l, int x)
// {
// 	int counter;
// 	t_val *tmp;

// 	counter = 0;
// 	tmp = l;
// 	if (ft_get_smallest(l)->value > x)
// 		return (0);
// 	if (ft_get_biggest(l)->value < x)
// 		return (ft_lstvalsize(l));
// 	while (tmp)
// 	{
// 		if (tmp->next)
// 		{
// 			if (tmp->value < x && tmp->next->value > x)
// 				return (counter);
// 		}
// 		counter++;
// 		tmp = tmp->next;
// 	}
// 	return (counter - 1);
// }

// static int	ft_find_order2(t_val *l, int x)
// {
// 	int counter;
// 	t_val *smallest;
// 	t_val *biggest;
// 	int *array;

// 	counter = 0;
// 	if (!l)
// 		return (0);
// 	smallest = ft_get_smallest(l);
// 	biggest = ft_get_biggest(l);
// 	array = malloc(sizeof(int) * ft_lstvalsize(l));
// 	ft_stoip(l, &array);
// 	ft_bubble_sort(array, ft_lstvalsize(l));
// 	if (smallest->value > x)
// 		return (ft_find_position(l, smallest->value));
// 	if (biggest->value < x)
// 		return (ft_find_position(l, biggest->value));
// 	while (counter < ft_lstvalsize(l) && counter >= 0)
// 	{
// 		if (array[counter - 1] < x && array[counter] > x)
// 			break;
// 		counter++;
// 	}
// 	return (ft_find_position(l, array[counter - 1]));

// 	// if (smallest->value > x)
// 	// 	return (0);
// 	// if (biggest->value < x)
// 	// 	return (ft_lstvalsize(l));
// 	// while (tmp)
// 	// {
// 	// 	if (tmp->next)
// 	// 	{
// 	// 		if (tmp->value < x && tmp->next->value > x)
// 	// 			return (counter);
// 	// 	}
// 	// 	counter++;
// 	// 	tmp = tmp->next;
// 	// }
// 	return (counter);
// }

void	ft_sequential_push(t_pw **arr, int s, int remainer)
{
	int		sp;
	int		ih;
	int		total;
	int		already;
	int		last_iter;
	int		coll;

	ih = 0;
	total = 0;
	already = 0;
	coll = 0;

	while (total <= (*arr)->count && remainer)
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
			while (ih != 0)
			{
				ft_rrb(arr);
				ih--;
			}
		}
		if (!ft_check_stack_sorted((*(*arr)->b)))
			ft_rb(arr);
		if (!ft_check_stack_sorted((*(*arr)->b)))
			ft_putstr_fd("ERROR! STACK IS NOT SORTED", 1);
		while ((ft_lstvalsize((*(*arr)->b)) != 0))
			ft_pa(arr);
		while (already != 0)
		{
			already--;
			ft_ra(arr);
		}
	}
	while ((ft_lstvalsize((*(*arr)->a)) > last_iter))
		ft_pb(arr);
	if ((ft_get_biggest((*(*arr)->a)) != (*(*arr)->a)) && !(ft_check_stack_sorted((*(*arr)->a))))
		ft_pb(arr);


	// while (ft_lstvalsize((*(*arr)->b)) != 0)
	// {
	// 	ih = 0;
	// 	sp = ft_find_order((*(*arr)->b), (*(*arr)->a)->value);
	// 	while (ih != (sp + 1) && sp != 0)
	// 	{
	// 		ft_ra(arr);
	// 		ih++;
	// 	}
	// 	ft_pa(arr);
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
		remainer = 25;
	}
	if (((*pw)->count) >= 200)
	{
		splitter = 10;
		remainer = 10;
	}
	if (((*pw)->count) > 350)
	{
		splitter = 30;
		remainer = 30;
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
