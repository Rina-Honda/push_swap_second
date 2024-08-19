/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhonda <rhonda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 01:44:49 by rhonda            #+#    #+#             */
/*   Updated: 2024/08/20 01:44:49 by rhonda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void    ft_sort(t_stack **a)
{
    t_stack *b;
    int     i;

    b = NULL;
    if (ft_listsize(*a) == 2)
        ft_sx(a, 'a', 0);
    // else
    // {
    //     b = ft_sort_b(a);
    //     a = ft_sort_a(a, &b);
    //     i = ft_find_index(*a, ft_min(*a));
    //     if (i < ft_listsize(*a) - i)
    //     {
    //         while ((*a)->num != ft_min(a))
    //             ft_ra(a, 0);
    //     }
    //     else{
    //         while ((*a)->num != ft_min(*a))
    //             ft_rra(a, 0);
    //     }
    // }
}
