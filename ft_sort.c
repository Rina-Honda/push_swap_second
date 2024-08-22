/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhonda <rhonda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 01:44:49 by rhonda            #+#    #+#             */
/*   Updated: 2024/08/23 01:27:04 by rhonda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void    ft_sort_b_till_three(t_stack **a, t_stack **b)
{
    int i;
    t_stack *tmp;

    while (ft_listsize(*a) > 3 && !ft_checksorted(*a))
    {
        tmp = *a;
        i = ft_rotate_type_ab(*a, *b);
        while (i >= 0)
        {
            if (i == ft_case_rarab(*a, *b, tmp->num))
                i = ft_apply_rarb(a, b, tmp->num, 'a');
            else if (i == ft_case_rrarrb(*a, *b, tmp->num))
                i == ft_apply_rrarrb(*a, *b, tmp->num, 'a');
            else if (i == ft_case_rarrb(*a, *b, tmp->num))
                i == ft_apply_rarrb(*a, *b, tmp->num, 'a');
            else if (i == ft_case_rrarb(*a, *b, tmp->num))
                i = ft_apply_rrarb(*a, *b, tmp->num, 'a');
            else
                tmp = tmp->next;
        }
    }
}

t_stack    *ft_sort_b(t_stack **a)
{
    t_stack *b;

    b = NULL;
    if (ft_listsize(*a) > 3 && !ft_checksorted(*a))
        ft_px(a, &b, 'b', 0);
    if (ft_listsize(*a) > 3 && !ft_checksorted(*a))
        ft_px(a, &b, 'b', 0);
    if (ft_listsize(*a) > 3 && !ft_checksorted(*a))
        ft_sort_b_till_three(a, &b);
    if (!checksorted(*a))
        // ft_sort_three(a);
    return (b);
}

void    ft_sort(t_stack **a)
{
    t_stack *b;
    int     i;

    b = NULL;
    if (ft_listsize(*a) == 2)
        ft_sx(a, 'a', 0);
    // else
    // {
        b = ft_sort_b(a);
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
