/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 09:57:15 by jfritz            #+#    #+#             */
/*   Updated: 2021/09/18 15:00:29 by jfritz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

/*
**	Prints the given stack
*/
void ft_print_stack(t_val *t)
{
	int x;

	ft_putendl_fd("PRINTING STACK", 1);
	while (t)
	{
		x = t->value;
		ft_putnbr_fd(x, 1);
		ft_putstr_fd(" index ", 1);
		ft_putnbr_fd(t->index, 1);
		ft_putstr_fd("\n ", 1);
		t = t->next;
	}
	ft_putendl_fd("PRINTING STACK END", 1);
}
