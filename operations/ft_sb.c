/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 09:17:46 by jfritz            #+#    #+#             */
/*   Updated: 2021/09/10 09:26:03 by jfritz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

/*
**	Swap the first two elements in stack b
*/
void	ft_sb(t_pw **arr)
{
	int temp;
	if (!((*arr)->count > 1 || ft_lstvalsize((*(*arr)->b)) < 1))
		return ;
	temp = (*(*arr)->b)->value;
	(*(*arr)->b)->value = (*(*arr)->b)->next->value;
	(*(*arr)->b)->next->value = temp;
}
