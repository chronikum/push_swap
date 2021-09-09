/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstvalindex.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 11:42:26 by jfritz            #+#    #+#             */
/*   Updated: 2021/09/09 14:25:48 by jfritz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_val	*ft_lstvalindex(t_val *lst, int index)
{
	int i;

	i = 0;
	t_val	*last;

	last = lst;
	while (lst)
	{
		last = lst;
		lst = lst->next;
		if (i == index)
			return (last);
		i++;
	}
	return (NULL);
}
