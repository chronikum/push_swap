/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstvaliter.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 14:01:36 by jfritz            #+#    #+#             */
/*   Updated: 2021/09/07 15:38:06 by jfritz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstvaliter(t_val *lst, void (*f)(void *))
{
	while (lst)
	{
		f(&lst->value);
		lst = lst->next;
	}
}
