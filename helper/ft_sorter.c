/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorter.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 08:40:16 by jfritz            #+#    #+#             */
/*   Updated: 2021/09/18 22:10:06 by jfritz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../ft_push_swap.h"

/*
**	Returns the index the value should be in
*/
// static int	ft_find_order(t_val *l, int x)
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
// 			if (tmp->index < x && tmp->next->index > x)
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
	int	total;
	int	beginning1;
	int	beginning2;
	int	position;

	s = 0;
	remainer = 0;
	beginning1 = 0;
	total = 0;
	position = 0;
	while ((total <= (*arr)->count))
	{
		if ((*(*arr)->a)->index > ((*arr)->count / 2))
			ft_pb(arr);
		else
			ft_ra(arr);
		total++;
	}

	beginning1 = ft_get_biggest((*(*arr)->b))->value;
	beginning2 = ft_get_biggest((*(*arr)->b))->value;
	while ((*(*arr)->b))
	{
		position = ft_find_position((*(*arr)->b), ft_get_biggest((*(*arr)->b))->value);
		while (ft_get_biggest((*(*arr)->b))->value != (*(*arr)->b)->value)
		{
			if (position < ft_lstvalsize((*(*arr)->b)) / 2)
				ft_rb(arr);
			else
				ft_rrb(arr);
		}
		ft_pa(arr);
	}
	while (beginning1 != (*(*arr)->a)->value)
	{
		ft_rra(arr);
	}
	ft_ra(arr);
	while ((*(*arr)->a)->value != beginning2)
		ft_pb(arr);
	while ((*(*arr)->b))
	{
		position = ft_find_position((*(*arr)->b), ft_get_biggest((*(*arr)->b))->value);
		while (ft_get_biggest((*(*arr)->b))->value != (*(*arr)->b)->value)
		{
			if (position < ft_lstvalsize((*(*arr)->b)) / 2)
				ft_rb(arr);
			else
				ft_rrb(arr);
		}
		ft_pa(arr);
	}
}

void    ft_sorter(t_pw **pw)
{
	ft_sequential_push(pw);
}
