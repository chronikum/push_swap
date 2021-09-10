/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 08:59:08 by jfritz            #+#    #+#             */
/*   Updated: 2021/09/10 09:25:51 by jfritz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

/*
**	Swap the first two elements in stack a
*/
void	ft_sa(t_pw **arr)
{
	int temp;
	if (!((*arr)->count > 1 || ft_lstvalsize((*(*arr)->a)) < 1))
		return ;
	temp = (*(*arr)->a)->value;
	(*(*arr)->a)->value = (*(*arr)->a)->next->value;
	(*(*arr)->a)->next->value = temp;
}
