/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 16:06:59 by jfritz            #+#    #+#             */
/*   Updated: 2021/08/10 15:27:25 by jfritz           ###   ########.fr       */
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

// static int ft_number_pos(char **argv, int argc, int pos)
// {
// 	int total;
// 	int ncount;
// 	char **split;
// 	char *next;
// 	int inner;

// 	ncount = 0;
// 	total = 0;
// 	inner = 0;
// 	while (ncount < (argc - 1))
// 	{
// 		next = argv[ncount + 1];
// 		if (ft_strchr(next, ' '))
// 		{
// 			split = ft_split(next, ' ');
// 			while (split[inner] != NULL)
// 			{
// 				if ((total + inner) == pos)
// 					return ft_atoi(split[inner]);
// 				inner++;

// 			}
// 			total += inner;
// 			free(split);
// 		}
// 		else
// 			total++;
// 		if (total == pos)
// 			return ft_atoi(argv[(ncount + 1)]);
// 		ncount++;
// 	}
// 	return (total);
// }

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
			{
				printf("%d : %s SPLIT\n",total + inner, split[inner]);
				inner++;
			}
			total += inner;
			free(split);
		}
		else
		{
			printf("%d : %s\n",total, argv[ncount + 1]);
			total++;
		}
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
		// (*arr)->arr[((counter - 1) + offset)] = ft_atoi(argv[counter]);
		// ft_putnbr_fd(ft_number_pos(argv, argc, counter), 1);
		counter++;
	}
	// (*arr)->count = total;
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
	return 0;
	ft_free_array(&arr, 0, 0);
	if (!ft_check_duplicate(arr))
		return (ft_free_array(NULL, 1, 1));
	ft_putstr_fd("DUP check OK\n", 1);
	if (ft_check_is_sorted(arr))
		return (ft_free_array(NULL, 0, 0));
	ft_putstr_fd("Not sorted.", 1);
	return (0);
}
