/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstvalnewval.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 14:27:02 by jfritz            #+#    #+#             */
/*   Updated: 2021/09/23 16:11:19 by jfritz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_val	*ft_lstvalnew(int value, int index)
{
	t_val	*s;

	s = malloc(sizeof(t_val));
	if (!s)
		return (0);
	s->value = value;
	s->index = index;
	return (s);
}
