/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhonda <rhonda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 01:44:49 by rhonda            #+#    #+#             */
/*   Updated: 2024/09/01 21:26:12 by rhonda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"
#include <stdio.h>
void print_stack(t_stack *stack)
{
    while (stack != NULL)
    {
        // printf("%ld ", stack->num);
        stack = stack->next;
    }
    // printf("\n");
}
static void ft_sort_b_till_three(t_stack **a, t_stack **b)
{
    t_rotation rot;
    // t_stack *tmp;

    while (ft_listsize(*a) > 3 && !ft_checksorted(*a))
    {
        // tmp = *a;
        rot = ft_rotate_type_ab(*a, *b);
		// printf("type: %d\n", rot.type);
        if (rot.type == 1)
            ft_apply_rarb(a, b, rot.target, 'a');
        else if (rot.type == 2)
            ft_apply_rrarrb(a, b, rot.target, 'a');
        else if (rot.type == 3)
            ft_apply_rarrb(a, b, rot.target, 'a');
        else if (rot.type == 4)
            ft_apply_rrarb(a, b, rot.target, 'a');
        else
            ft_px(a, b, 'b', 0);
    }
}

static t_stack	*ft_sort_b(t_stack **a)
{
	t_stack	*b;

	b = NULL;
	if (ft_listsize(*a) > 3 && !ft_checksorted(*a))
		ft_px(a, &b, 'b', 0);
	if (ft_listsize(*a) > 3 && !ft_checksorted(*a))
		ft_px(a, &b, 'b', 0);
	if (ft_listsize(*a) > 3 && !ft_checksorted(*a))
		ft_sort_b_till_three(a, &b);
	if (!ft_checksorted(*a))
		ft_sort_three(a);
	
	return (b);
}

static void ft_sort_a(t_stack **a, t_stack **b)
{
    t_rotation rot;
    // t_stack *tmp;

    while (*b != NULL)
    {
        // tmp = *b;
        rot = ft_rotate_type_ba(*a, *b);
        
        // printf("Rotate type: %d, Cost: %d\n", rot.type, rot.cost);
        
        if (rot.type == 1)
            ft_apply_rarb(a, b, rot.target, 'b');
        else if (rot.type == 2)
            ft_apply_rrarrb(a, b, rot.target, 'b');
        else if (rot.type == 3)
            ft_apply_rarrb(a, b, rot.target, 'b');
        else if (rot.type == 4)
            ft_apply_rrarb(a, b, rot.target, 'b');
        else
            ft_px(b, a, 'a', 0);
    }
}

void	ft_sort(t_stack **a)
{
	t_stack	*b;
	int		i;

	b = NULL;
	// int c = ft_listsize(*a);
	// printf("%d\n", c);
	if (ft_listsize(*a) == 2)
		ft_sx(a, 'a', 0);
	else
	{
		b = ft_sort_b(a);
		// printf("call_check_after_ft_sort_b\n");
		ft_sort_a(a, &b);
		// printf("call_check_after_ft_sort_a\n");
		// printf("stacka: %p\n", a);
		i = ft_find_index(*a, ft_min(*a));
		// printf("sort_min: %d\n", i);
		if (i < (ft_listsize(*a) - i))
		{
			while ((*a)->num != ft_min(*a))
				ft_rx(a, 'a', 0);
		}
		else
		{
			while ((*a)->num != ft_min(*a))
				ft_rrx(a, 'a', 0);
		}
		// printf("called_min_on_top\n");
	}
}
