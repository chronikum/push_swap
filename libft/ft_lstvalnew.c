/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstvalnew.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 15:53:24 by jfritz            #+#    #+#             */
/*   Updated: 2021/09/07 16:33:13 by jfritz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_val	*ft_lstvalnew(int value)
{
	t_val	*s;
	s = malloc(sizeof(t_val));
	if (!s)
		return (0);
	s->value = value;
	s->next = NULL;
	s->content = NULL;
	return (s);
}