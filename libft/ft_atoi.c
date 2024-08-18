/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhonda <rhonda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 19:33:57 by rhonda            #+#    #+#             */
/*   Updated: 2024/08/19 01:08:45 by rhonda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

int ft_atoi(const char *str)
{
    int mod;
    long long i;

    i = 0;
    mod = 1;
    while (*str == ' ' || *str == '\t' || *str == '\n'
            || *str == '\f' || *str == '\v' || *str == '\r')
            str++;
    if (*str == '-')
    {
        mod = -1;
        str++;
    }
    else if (*str == '+')
        str++;
    while (*str != '\0')
    {
        i = i * 10 + (*str - '0');
        str++;
    }
    if ((i * mod) < INT_MIN || INT_MAX < (i * mod))
        ft_error();
    return (i * mod);
}
