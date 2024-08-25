/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_case_ba.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhonda <rhonda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 01:11:04 by rhonda            #+#    #+#             */
/*   Updated: 2024/08/23 01:11:04 by rhonda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int ft_case_rarb_a(t_stack *a, t_stack *b, int target)
{
    int i;

    i = ft_find_place_a(a, target);
    if (i < ft_find_index(b, target))
        i = ft_find_index(b, target);
    return (i);
}

int ft_case_rrarrb_a(t_stack *a, t_stack *b, int target)
{
    int i;

    i = 0;
    if (ft_find_place_a(a, target))
        i = ft_listsize(a) - ft_find_place_a(a, target);
    if ((i < (ft_listsize(b) - ft_find_index(b, target))) && ft_find_index(b, target))
        i = ft_listsize(b) - ft_find_index(b, target);
    return (i);
}

int ft_case_rarrb_a(t_stack *a, t_stack *b, int target)
{
    int i;

    i = 0;
    if (ft_find_index(b, target))
        i = ft_listsize(b) - ft_find_index(b, target);
    i += ft_find_place_a(a, target);
    return (i);
}

int ft_case_rrarb_a(t_stack *a, t_stack *b, int target)
{
    int i;

    i = 0;
    if (ft_find_place_a(a, target))
        i = ft_listsize(a) - ft_find_place_a(a, target);
    i += ft_find_index(b, target);
    return (i);
}
