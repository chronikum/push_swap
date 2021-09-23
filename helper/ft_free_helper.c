/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_helper.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 19:42:09 by jfritz            #+#    #+#             */
/*   Updated: 2021/09/23 16:07:18 by jfritz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

void	ft_single_free(char **string)
{
	if (!string)
		return ;
	free(*string);
	*string = 0;
}

int	ft_double_free(char	**string)
{
	int	i;

	i = 0;
	if (!string)
		return (0);
	if (!string[i])
		return (0);
	while (string[i] != NULL)
	{
		ft_single_free(&string[i]);
		i++;
	}
	free(string);
	string = 0;
	return (0);
}
