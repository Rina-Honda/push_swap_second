/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhonda <rhonda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 01:55:06 by rhonda            #+#    #+#             */
/*   Updated: 2024/08/19 01:55:06 by rhonda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_push_swap.h"

t_stack *ft_listlast(t_stack *list)
{
    while (list != NULL)
    {
        if (list->next == NULL)
            return (list);
        list = list->next;
    }
    return (list);
}
