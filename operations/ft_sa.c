/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 08:59:08 by jfritz            #+#    #+#             */
/*   Updated: 2021/09/06 13:15:39 by jfritz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

/*
**	Swap the first two elements in stack a
*/
void	ft_sa(t_pw **arr)
{
	int *t;

	if (!((*arr)->count > 1 || ft_lstsize((*(*arr)->a)) < 1))
		return ;
	t = (*(*arr)->a)->content;
	(*(*arr)->a)->content = (*(*arr)->a)->next->content;
	(*(*arr)->a)->next->content = t;
}