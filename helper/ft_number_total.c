/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_number_total.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 15:04:22 by jfritz            #+#    #+#             */
/*   Updated: 2021/08/14 15:09:06 by jfritz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

/*
**	Returns the total count of numbers within
**	the input string. Handles quotes
*/
int ft_number_total(char **argv, int argc)
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
			while (split[i[2]] != NULL)
				i[2]++;
			i[1] += i[2];
			free(split);
		}
		else
			i[1]++;
		i[0]++;
	}
	return (i[1]);
}
