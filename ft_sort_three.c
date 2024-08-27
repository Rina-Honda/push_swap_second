/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_three.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhonda <rhonda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 02:17:40 by rhonda            #+#    #+#             */
/*   Updated: 2024/08/23 02:17:40 by rhonda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_sort_three(t_stack **a)
{
	if (ft_min(*a) == (*a)->num)
	{
		ft_rrx(a, 'a', 0);
		ft_sx(a, 'a', 0);
	}
	else if (ft_max(*a) == (*a)->num)
	{
		ft_rx(a, 'a', 0);
		if (!ft_checksorted(*a))
			ft_sx(a, 'a', 0);
	}
	else
	{
		if (ft_find_index(*a, ft_max(*a)) == 1)
			ft_rrx(a, 'a', 0);
		else
			ft_sx(a, 'a', 0);
	}
}
