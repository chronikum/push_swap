/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 16:06:59 by jfritz            #+#    #+#             */
/*   Updated: 2021/09/21 15:20:58 by jfritz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"
#include <stdio.h>

/*
**	Validates if number received is the actual value or not
**	This can happen if a number exceeds the maximal or minimal integer.
*/
// static int	ft_validate_number(char *n)
// {
// 	long long	number_long;
// 	int			number_int;

// 	number_int = ft_atoi(n);
// 	number_long = ft_ll_atoi(n);
// 	if (number_int == number_long)
// 		return (1);
// 	return (0);
// }

char	**ft_input_parser(char **argv)
{
	t_parser	var;
	char		**arr;

	var.i = 0;
	var.str = ft_strdup("");
	while (argv[var.i] != '\0')
	{
		arr = ft_split(argv[var.i], ' ');
		var.j = 0;
		while (arr[var.j] != '\0')
		{
			var.tmp = ft_strjoin(arr[var.j], ",");
			var.tmp2 = var.str;
			var.str = ft_strjoin(var.tmp2, var.tmp);
			ft_single_free(&var.tmp);
			ft_single_free(&var.tmp2);
			var.j++;
		}
		ft_double_free(arr);
		var.i++;
	}
	arr = ft_split(var.str, ',');
	ft_single_free(&var.str);
	return (arr);
}

/*
**	Gets a number at a certain position within the
**	inputted string. Handles quotes arguments too.
**	Sets the read string as char c so we can use it
**	for validation later on
*/
// static int	ft_number_pos(char **argv, int position)
// {
// 	int counter;
// 	char **split;
// 	int res;

// 	split = ft_input_parser(argv);
// 	counter = 1;
// 	while (counter != (position))
// 		counter++;
// 	res = ft_atoi(split[counter]);
// 	ft_putnbr_fd(res, 1);
// 	// if (ft_validate_number(res));
// 	ft_double_free(split);
// 	return (res);
// }

static int	ft_free_array(t_pw **array_d, int ret, int err, int free_it)
{
	static t_pw	**array;

	if (err)
		ft_exit_error();
	if (array_d)
		array = array_d;
	if (!array_d && array && free_it)
	{
		free((*array)->arr);
		free((*array)->a);
		free((*array)->b);
		free((*array));
	}
	return (ret);
}

/*
**	Fill the array with the given values.
**	TODO; Check for overflow
*/
static int	ft_fill_array(t_pw **arr, char **argv, int argc)
{
	int		counter;
	int		total;
	int 	number;
	char	**arr_i;

	total = ft_number_total(argv, argc);
	arr_i = ft_input_parser(argv);
	(*arr) = malloc(sizeof(t_pw));
	(*arr)->arr = malloc(sizeof(int) * total);
	(*arr)->a = malloc(sizeof(t_val *));
	counter = 0;
	while (counter < total)
	{
		number = ft_atoi(arr_i[counter + 1]);
		(*arr)->arr[((counter))] = number;
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
	ft_putendl_fd("STACK A", 1);
	printf("COUNT: %d \n", ft_lstvalsize((*pw->a)));
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
	printf("COUNT: %d \n", ft_lstvalsize((*pw->b)));
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
	valid = ft_fill_array(&arr, argv, argc);
	ft_free_array(&arr, 0, 0, 1);
	if (!ft_check_duplicate(arr) || (valid == 0))
		return (ft_free_array(NULL, 1, 1, 0));
	if (ft_check_is_sorted(arr))
		return (ft_free_array(NULL, 0, 0, 0));
	if (ft_arr_lnklst(&arr))
		ft_sorter(&arr);
	ft_clear(arr->a);
	ft_clear(arr->b);
	ft_free_array(NULL, 0, 0, 1);
	// system("leaks push_swap");
	return (0);
}
