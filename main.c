/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 16:06:59 by jfritz            #+#    #+#             */
/*   Updated: 2021/08/05 10:19:44 by jfritz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

/*
**	Exit with error
*/
static int	ft_exit_error(void)
{
	ft_putstr_fd("Error", 2);
	return (1);
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
void	ft_fill_array(t_pw **arr, char **argv, int argc)
{
	int	counter;

	(*arr) = malloc(sizeof(t_pw));
	(*arr)->arr = malloc(sizeof(int) * (argc - 1));
	counter = 1;
	while (counter < argc)
	{
		(*arr)->arr[(counter - 1)] = ft_atoi(argv[counter]);
		counter++;
	}
	(*arr)->count = (counter - 1);
}

/*
**	Read in input from user and validate it.
**	Set the array as reference in ft_free_array
*/
int	main(int argc, char **argv)
{
	t_pw *arr;

	if (!ft_check_input(argv, argc))
		return (ft_exit_error());
	ft_putstr_fd("Input check OK\n", 1);
	ft_fill_array(&arr, argv, argc);
	ft_free_array(&arr, 0, 0);
	if (!ft_check_duplicate(arr))
		return (ft_free_array(NULL, 1, 1));
	ft_putstr_fd("DUP check OK\n", 1);
	if (ft_check_is_sorted(arr))
		return (ft_free_array(NULL, 0, 0));
	ft_putstr_fd("Not sorted.", 1);
	return (0);
}
