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

int ft_apply_rarb(t_stack **a, t_stack **b, int num, char c)
{
    if (c == 'a')
    {
        while ((*a)->num != num && ft_find_place_b(*b, num) > 0)
            ft_rr(a, b, 0);
        while ((*a)->num != num)
            ft_rx(a, 'a', 0);
        while (ft_find_place_b(*b, num) > 0)
            ft_rx(b, 'b', 0);
        px(a, b, 'b', 0);
    }
    else
    {
        while ((*b)->num != num && ft_find_place_a(*a, num) > 0)
            ft_rr(a, b, 0);
        while ((*b)->num != num)
            ft_rx(b, 'b', 0);
        while (ft_find_place_a(*a, num) > 0)
            ft_rx(a, 'a', 0);
        px(b, a, 'a', 0);
    }
    return (-1);
}

int ft_apply_rrarrb(t_stack **a, t_stack **b, int num, char c)
{
    if (c == 'a')
    {
        while ((*a)->num != num && ft_find_place_b(*b, num) > num)
            ft_rrr(a, b, 0);
        while ((*a)->num != num)
            ft_rrx(a, 'a', 0);
        while (ft_find_place_b(*b, num) > 0)
            ft_rrx(b, 'b', 0);
        ft_px(a, b, 'b', 0);
    }
    else
    {
        while ((*b)->num != c && ft_find_place_a(*a, num) > 0)
            ft_rrr(a, b, 0);
        while ((*b)->num != num)
            ft_rrx(b, 'b', 0);
        while (ft_find_place_a(*a, num) > 0)
            ft_rrx(a, 'a', 0);
        px(b, a, 'a', 0);
    }
    return (-1);
}

int ft_apply_rrarb(t_stack **a, t_stack **b, int num, char c)
{
    if (c == 'a')
    {
        while ((*a)->num != num)
            ft_rrx(a, 'a', 0);
        while (ft_find_place_b(*b, c) > 0)
            ft_rx(b, 'b', 0);
        ft_px(a, b, 'b', 0);
    }
    else
    {
        while (ft_find_place_a(*a, num) > 0)
            ft_rrx(a, 'a', 0);
        while ((*b)->num != num)
            ft_rx(b, 'b', 0);
        ft_px(b, a, 'a', 0);
    }
}

int ft_apply_rarrb(t_stack **a, t_stack **b, int num, char c)
{
    if (c == 'a')
    {
        while ((*a)->num != num)
            ft_rx(a, 'a', 0);
        while (ft_find_place_b(*b, num) > 0)
            ft_rrx(b, 'b', 0);
        ft_px(a, b, 'b', 0);
    }
    else
    {
        while (ft_find_place_a(*a, num) > 0)
            ft_rx(a, 'a', 0);
        while ((*b)->num != num)
            ft_rrx(b, 'b', 0);
        ft_px(b, 'a', a, 0);
    }
    return (-1);
}
