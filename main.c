/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 16:06:59 by jfritz            #+#    #+#             */
/*   Updated: 2021/08/14 14:52:14 by jfritz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"
#include <stdio.h>

/*
**	Exit with error
*/
static int	ft_exit_error(void)
{
	ft_putstr_fd("Error", 2);
	return (1);
}

static int ft_number_pos(char **argv, int argc, int pos)
{
	char **split;
	char *next;
	int i[3];

	ft_init_helper_array(i);
	while (i[0] < (argc - 1))
	{
		i[2] = 0;
		next = argv[i[0] + 1];
		if (ft_strchr(next, ' '))
		{
			split = ft_split(next, ' ');
			while (split[i[2]++] != NULL)
			{
				if (pos == (i[1] + (i[2] - 1)))
					return (ft_atoi(split[(i[2] - 1)]));
			}
			i[1] += (i[2] - 1);
			free(split);
		}
		else
		{
			if (i[1]++ == pos)
				return (ft_atoi(argv[i[0] + 1]));
		}
		i[0]++;
	}
	return (i[1]);
}

static int ft_number_total(char **argv, int argc)
{
	int total;
	int ncount;
	char **split;
	char *next;
	int inner;

	ncount = 0;
	total = 0;
	inner = 0;
	while (ncount < (argc - 1))
	{
		inner = 0;
		next = argv[ncount + 1];
		if (ft_strchr(next, ' '))
		{
			split = ft_split(next, ' ');
			while (split[inner] != NULL)
				inner++;
			total += inner;
			free(split);
		}
		else
			total++;
		ncount++;
	}
	return (total);
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
	int total;

	total = ft_number_total(argv, argc);
	(*arr) = malloc(sizeof(t_pw));
	(*arr)->arr = malloc(sizeof(int) * total);
	counter = 0;
	while (counter < total)
	{
		(*arr)->arr[((counter))] = ft_number_pos(argv, argc, counter);
		printf("%d : %d \n", counter, ft_number_pos(argv, argc, counter));
		counter++;
	}
	(*arr)->count = total;
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
