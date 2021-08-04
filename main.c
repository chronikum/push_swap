/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 16:06:59 by jfritz            #+#    #+#             */
/*   Updated: 2021/08/04 14:42:04 by jfritz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

/*
**	Exit with error
*/
static int ft_exit_error(void)
{
	ft_putstr_fd("Error", 2);
	return (1);
}

/*
**	Once supplied with the array, it will
**	free it as soon as called.
**	Returns the integer supplied with.
*/
static int	ft_free_array(int **array_d, int ret)
{
	static int **array;
	
	if (array_d)
		array = array_d;
	if (!array_d && array)
		free(array);
	return (ret);
}

/*
**	Fill the array with the given values.
*/
void ft_fill_array(int **array, char **argv, int argc)
{
	int counter;
	
	counter = 1;
	while (counter < argc)
	{
		(*array)[counter] = ft_atoi(argv[counter]);
		counter++;
	}
}

/*
**	Read in input from user and validate it.
**	Set the array as reference in ft_free_array
*/
int	main(int argc, char **argv)
{
	int *array;
	
	if (argc > 0)
	{
		if (!ft_check_input(argv, argc))
			return ft_exit_error();
		array = malloc(sizeof(int) * argc);
		ft_fill_array(&array, argv, argc);
		ft_free_array(&array, 0);
	}
	return (0);
}
