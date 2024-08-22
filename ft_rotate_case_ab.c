/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_rotate_case.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhonda <rhonda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 00:30:13 by rhonda            #+#    #+#             */
/*   Updated: 2024/08/21 00:30:13 by rhonda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int ft_case_rarb(t_stack *a, t_stack *b, int num)
{
    int i;

    i = ft_find_place_b(b, num);
    if (i < ft_find_index(a, num))
        i = ft_find_index(a, num); //回転コストを計算、大きい方に合わせる
    return (i); //どのnodeを動かすのが手数が少なくて済むか計算している？
}

int ft_case_rrarrb(t_stack *a, t_stack *b, int num)
{
    int i;

    i = 0;
    if (ft_find_place_b(b, num))
        i = ft_listsize(b) - ft_find_place_b(b, num);
    if ((i < (ft_listsize(a) - ft_find_index(a, num))) && ft_find_index(a, num))
        i = ft_listsize(a) - ft_find_index(a, num);
    return (i); 
}

int ft_case_rrarb(t_stack *a, t_stack *b, int num)
{
    int i;

    i = 0;
    if (ft_find_index(a, num))
        i = ft_listsize(a) - ft_find_index(a, num);
    i += ft_find_place_b(b, num); //純粋に足し合わせる
    return (i);
}

int ft_case_rarrb(t_stack *a, t_stack *b, int num)
{
    int i;

    i = 0;
    if (ft_find_place_b(b, num))
        i = ft_listsize(b) - ft_find_place_b(b, num);
    i += ft_find_index(a, num);
    return (i); 
}
