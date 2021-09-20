/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstvalbyindex.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 10:07:43 by jfritz            #+#    #+#             */
/*   Updated: 2021/09/20 14:32:36 by jfritz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

/*
**	Gets a value by the SORTED index.
*/
t_val	*ft_lstvalbyindex(t_val *lst, int index)
{
	int		i;
	t_val	*last;

	i = 0;
	last = lst;
	while (lst)
	{
		last = lst;
		if (last->index == index)
			return (last);
		lst = lst->next;
	}
	return (NULL);
}
