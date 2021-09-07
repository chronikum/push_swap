/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstindex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 11:42:26 by jfritz            #+#    #+#             */
/*   Updated: 2021/09/07 11:43:57 by jfritz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstindex(t_list *lst, int index)
{
	int i;

	i = 0;
	t_list	*last;

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
