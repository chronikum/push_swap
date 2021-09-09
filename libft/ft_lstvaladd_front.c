/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstvaladd_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 09:51:03 by jfritz            #+#    #+#             */
/*   Updated: 2021/09/08 11:04:01 by jfritz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstvaladd_front(t_val **lst, t_val *new)
{
	if (lst && new)
	{
		if (lst)
		{
			new->next = *lst;
			(*lst) = new;
		}
		else
		{
			*lst = new;
			(*lst)->next = NULL;
		}
	}
}
