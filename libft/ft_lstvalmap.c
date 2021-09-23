/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstvalmap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 13:56:24 by jfritz            #+#    #+#             */
/*   Updated: 2021/09/23 16:13:05 by jfritz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_val	*ft_lstvalmap(t_val *lst, void *(*f)(void *), void (*del)(void *))
{
	t_val	*nl;
	t_val	*ne;

	if (lst == NULL)
		return (NULL);
	nl = NULL;
	while (lst)
	{
		ne = ft_lstvalnew((*(int *)(*f)(lst->content)), lst->index);
		if (!ne)
		{
			ft_lstvalclear(&nl, del);
			return (NULL);
		}
		ft_lstvaladd_back(&nl, ne);
		ne = ne->next;
		lst = lst->next;
	}
	return (nl);
}
