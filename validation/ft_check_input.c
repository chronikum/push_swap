/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 13:39:56 by jfritz            #+#    #+#             */
/*   Updated: 2021/08/10 15:41:54 by jfritz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../ft_push_swap.h"
/*
**	Checks the array to be only digits
*/
static int	ft_check_digits(char **argv, int argc)
{
	int		count;
	int		ccount;
	char	*current;

	count = 1;
	while (count < argc && (argv[count]))
	{
		ccount = 0;
		current = argv[count];
		while (current[ccount])
		{
			if ((current[ccount] == '-'
					|| current[ccount] == '+') && ccount == 0)
				ccount++;
			while (current[ccount] == ' ')
				ccount++;
			if (!ft_isdigit(current[ccount]))
				return (0);
			ccount++;
		}
		count++;
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
