/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_position.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 13:30:38 by jfritz            #+#    #+#             */
/*   Updated: 2021/09/20 14:27:07 by jfritz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

/*
**	Returns the index of the searched value
*/
int	ft_find_position(t_val *l, int needle)
{
	int		i;
	t_val	*next;

	i = 0;
	next = l;
	while (next)
	{
		if (next->value == needle)
			return (i);
		next = next->next;
		i++;
	}
	return (-1);
}
