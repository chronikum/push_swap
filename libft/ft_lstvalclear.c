/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstvalclear.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 09:27:19 by jfritz            #+#    #+#             */
/*   Updated: 2021/09/07 15:31:54 by jfritz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstvalclear(t_val **lst, void (*del)(void*))
{
	t_val	*current;

	while (*lst)
	{
		current = *lst;
		*lst = (*lst)->next;
		ft_lstvaldelone(current, del);
	}
}
