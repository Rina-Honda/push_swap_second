/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhonda <rhonda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 04:55:15 by rhonda            #+#    #+#             */
/*   Updated: 2024/07/25 04:55:15 by rhonda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int main(int argc, char **argv)
{
    t_stack *a;

    a = ft_process(argc, argv);
    if (a == NULL || ft_checkdup(a))
    {
        ft_free(&a);
        ft_error();
    }
    if (!ft_checksorted(a))
        ft_sort(&a);
    ft_free(&a);
    return (0);
}
