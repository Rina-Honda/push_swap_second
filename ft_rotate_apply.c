/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_apply.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhonda <rhonda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 01:28:27 by rhonda            #+#    #+#             */
/*   Updated: 2024/08/23 01:28:27 by rhonda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"
#include <stdio.h>
int	ft_apply_rarb(t_stack **a, t_stack **b, int target, char c)
{
	if (c == 'a')
	{
		while ((*a)->num != target && ft_find_place_b(*b, target) > 0)
			ft_rr(a, b, 0);
		while ((*a)->num != target)
			ft_rx(a, 'a', 0);
		while (ft_find_place_b(*b, target) > 0)
			ft_rx(b, 'b', 0);
		// printf("%s\n", "b1");
		ft_px(a, b, 'b', 0);
	}
	else
	{
		while ((*b)->num != target && ft_find_place_a(*a, target) > 0)
			ft_rr(a, b, 0);
		while ((*b)->num != target){
			ft_rx(b, 'b', 0);
		}

		while (ft_find_place_a(*a, target) > 0)
			ft_rx(a, 'a', 0);
		ft_px(b, a, 'a', 0);
	}
	return (-1);
}

int	ft_apply_rrarrb(t_stack **a, t_stack **b, int target, char c)
{
	if (c == 'a')
	{
		while ((*a)->num != target && ft_find_place_b(*b, target) > 0)
			ft_rrr(a, b, 0);
		while ((*a)->num != target)
			ft_rrx(a, 'a', 0);
		while (ft_find_place_b(*b, target) > 0)
			ft_rrx(b, 'b', 0);
		// printf("%s\n", "b2");
		ft_px(a, b, 'b', 0);
	}
	else
	{
		while ((*b)->num != target && ft_find_place_a(*a, target) > 0)
			ft_rrr(a, b, 0);
		while ((*b)->num != target)
			ft_rrx(b, 'b', 0);
		while (ft_find_place_a(*a, target) > 0)
			ft_rrx(a, 'a', 0);
		ft_px(b, a, 'a', 0);
	}
	return (-1);
}

int	ft_apply_rrarb(t_stack **a, t_stack **b, int target, char c)
{
	if (c == 'a')
	{
		while ((*a)->num != target)
			ft_rrx(a, 'a', 0);
		while (ft_find_place_b(*b, target) > 0)
			ft_rx(b, 'b', 0);
		// printf("%s\n", "b3");
		ft_px(a, b, 'b', 0);
	}
	else
	{
		while (ft_find_place_a(*a, target) > 0)
			ft_rrx(a, 'a', 0);
		while ((*b)->num != target)
			ft_rx(b, 'b', 0);
		ft_px(b, a, 'a', 0);
	}
	return (-1);
}

int	ft_apply_rarrb(t_stack **a, t_stack **b, int target, char c)
{
	if (c == 'a')
	{
		while ((*a)->num != target)
			ft_rx(a, 'a', 0);
		while (ft_find_place_b(*b, target) > 0)
			ft_rrx(b, 'b', 0);
		// printf("%s\n", "b4");
		ft_px(a, b, 'b', 0);
	}
	else
	{
		while (ft_find_place_a(*a, target) > 0)
			ft_rx(a, 'a', 0);
		while ((*b)->num != target)
			ft_rrx(b, 'b', 0);
		ft_px(b, a, 'a', 0);
	}
	return (-1);
}
