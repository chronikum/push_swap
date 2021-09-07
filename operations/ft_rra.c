/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rra.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 11:38:31 by jfritz            #+#    #+#             */
/*   Updated: 2021/09/07 11:51:22 by jfritz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

/*
**	Reverse rotate staack a
**	The last element becomes the first one.
*/
void	ft_rra(t_pw **arr)
{
	int size;
	t_list *prelast;
	size = ft_lstsize((*(*arr)->a));
	ft_lstadd_front((*arr)->a, ft_lstnew(ft_lstlast((*(*arr)->a))->content));
	prelast = ft_lstindex((*(*arr)->a), (size - 1));
	prelast->next = NULL;
}
