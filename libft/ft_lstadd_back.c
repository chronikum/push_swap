/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 09:56:59 by jfritz            #+#    #+#             */
/*   Updated: 2021/09/08 11:05:20 by jfritz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst);

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (new)
	{
		last = ft_lstlast(*lst);
		if (last)
			last->next = new;
		else
		{
			*lst = new;
			(*lst)->next = NULL;
		}
	}
}
