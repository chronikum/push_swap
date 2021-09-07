/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstvallast.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 09:59:46 by jfritz            #+#    #+#             */
/*   Updated: 2021/09/07 15:30:46 by jfritz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_val	*ft_lstvallast(t_val *lst)
{
	t_val	*last;

	last = lst;
	while (lst)
	{
		last = lst;
		lst = lst->next;
	}
	return (last);
}
