/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 13:39:56 by jfritz            #+#    #+#             */
/*   Updated: 2021/08/13 20:18:04 by jfritz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../ft_push_swap.h"

/*
**	Check if char array is number
*/
static int	ft_is_number(char *c)
{
	int	i;

	i = 0;
	while (c[i])
	{
		while (c[i] == ' ')
			i++;
		if ((c[i] == '-' || c[i] == '+'))
			i++;
		if (ft_isdigit(c[i]))
			i++;
		else
			return (0);
	}
	return (1);
}

/*
**	Checks the array to be only digits
**	@TODO: CHECK IF
*/
static int	ft_check_digits(char **argv, int argc)
{
	char	**split;
	int		i[3];

	i[0] = 0;
	i[1] = 0;
	i[2] = 0;
	while (i[0] < (argc - 1))
	{
		i[2] = 0;
		if (ft_strchr(argv[i[0] + 1], ' '))
		{
			split = ft_split(argv[i[0] + 1], ' ');
			while (split[i[2]] != NULL)
			{
				if (!ft_is_number(split[i[2]++]))
					return (0);
			}
			i[1] += i[2];
			free(split);
		}
		else
			i[1]++;
		if (!ft_is_number(argv[++i[0]]))
			return (0);
	}
	return (1);
}

/*
**	Checks input and returns 1 if the input is valid
**	zero otherwise
*/
int	ft_check_input(char **argv, int argc)
{
	if (argc <= 1)
		return (0);
	if (!ft_check_digits(argv, argc))
		return (0);
	return (1);
}
