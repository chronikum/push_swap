/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 16:06:59 by jfritz            #+#    #+#             */
/*   Updated: 2021/08/04 12:16:22 by jfritz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"


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
	Read in input from user and validate it.
*/
int	main(int argc, char **argv)
{
	int *array;
	
	if (argc > 0)
	{
		array = malloc(sizeof(int) * argc);
		ft_fill_array(&array, argv, argc);
	}
	return (0);
}
