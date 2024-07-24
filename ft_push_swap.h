/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhonda <rhonda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 04:55:32 by rhonda            #+#    #+#             */
/*   Updated: 2024/07/25 05:59:51 by rhonda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUSH_SWAP_H
# define FT_PUSH_SWAP_H

//include
#include <unistd.h>
#include <stddef.h>

//define

//typedef  

//struct
typedef struct s_stack
{
    long num;
    long index;
    struct s_stack *next;
    struct s_stack *prev;
} t_stack;

//function

#endif FT_PUSH_SWAP_H