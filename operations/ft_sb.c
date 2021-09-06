/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 09:17:46 by jfritz            #+#    #+#             */
/*   Updated: 2021/09/06 11:36:42 by jfritz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

/*
**	Swap the first two elements in stack a
*8 TODO: Check if b is empty
*/
void	ft_sb(t_pw **arr)
{
	int *t;

	if (!((*arr)->count > 1 || ft_lstsize((*(*arr)->b)) < 1))
		return ;
	t = (*(*arr)->b)->content;
	(*(*arr)->b)->content = (*(*arr)->b)->next->content;
	(*(*arr)->b)->next->content = t;
}