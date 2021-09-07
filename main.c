/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 16:06:59 by jfritz            #+#    #+#             */
/*   Updated: 2021/09/07 16:33:52 by jfritz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"
#include <stdio.h>

/*
**	Validates if number received is the actual value or not
**	This can happen if a number exceeds the maximal or minimal integer.
*/
static int	ft_validate_number(char *n)
{
	long long	number_long;
	int			number_int;

	number_int = ft_atoi(n);
	number_long = ft_ll_atoi(n);
	if (number_int == number_long)
		return (1);
	return (0);
}

/*
**	Gets a number at a certain position within the
**	inputted string. Handles quotes arguments too.
**	Sets the read string as char c so we can use it
**	for validation later on
*/
static int	ft_number_pos(char **argv, int argc, int pos, char **c)
{
	char	**split;
	int		i[3];

	ft_init_helper_array(i);
	while (i[0] < (argc - 1))
	{
		i[2] = 0;
		if (ft_strchr(argv[i[0] + 1], ' '))
		{
			split = ft_split(argv[i[0] + 1], ' ');
			while (split[i[2]++] != NULL)
			{
				(*c) = split[(i[2] - 1)];
				if (pos == (i[1] + (i[2] - 1)))
					return (ft_atoi(split[(i[2] - 1)]));
			}
			ft_free_and_increase_counter(&i[1], &i[2], &split);
		}
		else
		{
			(*c) = argv[i[0] + 1];
			if (i[1]++ == pos)
				return (ft_atoi(argv[i[0] + 1]));
		}
		i[0]++;
	}
	return (i[1]);
}

/*
**	Once supplied with the array, it will
**	free it as soon as called.
**	Returns the integer supplied with.
*/
static int	ft_free_array(t_pw **array_d, int ret, int err)
{
	static t_pw	**array;

	if (err)
		ft_exit_error();
	if (array_d)
		array = array_d;
	if (!array_d && array)
	{
		free((*array)->arr);
		free((*array));
	}
	return (ret);
}

/*
**	Fill the array with the given values.
*/
static int	ft_fill_array(t_pw **arr, char **argv, int argc)
{
	int	counter;
	int	total;
	int number;
	char *str;

	total = ft_number_total(argv, argc);
	(*arr) = malloc(sizeof(t_pw));
	(*arr)->arr = malloc(sizeof(int) * total);
	(*arr)->or_arr = malloc(sizeof(int) * total);
	(*arr)->a = malloc(sizeof(t_val *));
	counter = 0;
	while (counter < total)
	{
		number = ft_number_pos(argv, argc, counter, &str);
		if (ft_validate_number(str) == 0)
			return (0);
		(*arr)->arr[((counter))] = number;
		(*arr)->or_arr[((counter))] = number;
		counter++;
	}
	(*arr)->count = total;
	return (1);
}

void print_stack_a(t_pw *pw)
{
	t_val *t;
	int x;

	t = (*pw->a);
	while (t)
	{
		x = t->value;
		ft_putstr_fd("\n", 1);
		ft_putnbr_fd(x, 1);
		t = t->next;
	}
}

void print_stack_b(t_pw *pw)
{
	t_val *t;
	int x;

	t = (*pw->b);
	ft_putendl_fd("STACK B", 1);
	while (t)
	{
		x = t->value;
		ft_putnbr_fd(x, 1);
		ft_putstr_fd("\n", 1);
		t = t->next;
	}
}

/*
**	Read in input from user and validate it.
**	Set the array as reference in ft_free_array
*/
int	main(int argc, char **argv)
{
	t_pw	*arr;
	int		valid;

	if (!ft_check_input(argv, argc))
		return (ft_exit_error());
	ft_putstr_fd("Input check OK\n", 1);
	valid = ft_fill_array(&arr, argv, argc);
	ft_free_array(&arr, 0, 0);
	if (!ft_check_duplicate(arr) || (valid == 0))
		return (ft_free_array(NULL, 1, 1));
	ft_putstr_fd("DUP check OK\n", 1);
	if (ft_check_is_sorted(arr))
		return (ft_free_array(NULL, 0, 0));
	ft_putstr_fd("Not sorted.", 1);
	ft_arr_lnklst(&arr);
	// ft_sa(&arr);
	// ft_pb(&arr);
	// ft_pa(&arr);
	// ft_ra(&arr);
	ft_rra(&arr);
	// ft_rb(&arr);
	print_stack_a(arr);
	// print_stack_b(arr);
	return (0);
}
