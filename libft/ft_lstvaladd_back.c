/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstvaladd_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 09:56:59 by jfritz            #+#    #+#             */
/*   Updated: 2021/09/07 19:01:44 by jfritz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstvaladd_back(t_val **lst, t_val *new)
{
	t_val	*last;

	if (new)
	{
		last = ft_lstvallast((*lst));
		if (last)
			last->next = new;
		else
			(*lst) = new;
	}
}
