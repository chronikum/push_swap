/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 11:52:10 by jfritz            #+#    #+#             */
/*   Updated: 2021/09/07 11:52:45 by jfritz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

#include "../ft_push_swap.h"

/*
**	Reverse rotate staack b
**	The last element becomes the first one.
*/
void	ft_rrb(t_pw **arr)
{
	int size;
	t_list *prelast;
	size = ft_lstsize((*(*arr)->b));
	ft_lstadd_front((*arr)->b, ft_lstnew(ft_lstlast((*(*arr)->b))->content));
	prelast = ft_lstindex((*(*arr)->b), (size - 1));
	prelast->next = NULL;
}
