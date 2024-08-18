/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhonda <rhonda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 19:22:59 by rhonda            #+#    #+#             */
/*   Updated: 2024/08/11 19:22:59 by rhonda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void    ft_free(t_stack **list)
{
    t_stack *tmp;
    
    if(list == NULL)
        return ;
    while(*list != NULL)
    {
        tmp = (*list)->next;
        (*list)->num = 0; //numを0にする必要はある？
        free(*list);
        *list = tmp;
    }
}
