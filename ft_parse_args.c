/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_args.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhonda <rhonda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 05:23:23 by rhonda            #+#    #+#             */
/*   Updated: 2024/07/25 06:13:20 by rhonda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

static t_stack *ft_new_stack_variable(char **argv)
{
    t_stack *stack;
    t_stack *new;
    int i;

    stack = NULL;
    i = 1;
    while (argv[i])
    {
        new = ft_new_stack(ft_atoi(argv[i]));
        ft_stack_add_back(&stack, new);
        i++;
    }
    return (stack);
}

static t_stack *ft_new_stack_quote(char *str)
{
    t_stack *stack;
    t_stack *new;
    char **split;
    int i;

    stack = NULL;
    split = ft_split(str, ' ');
    i = 0;
    while (split[i])
    {
        new = ft_new_stack(ft_atoi(split[i]));
        ft_stack_add_back(&stack, new);
        i++;
    }
    ft_free_split(split);
    return (stack);
}

t_stack *ft_parse_args(int argc, char **argv)
{
    t_stack *stack;

    stack = NULL;
    if (argc < 2)
        ft_error();
    else if (argc == 2)
        stack = ft_new_stack_quote(argv[1]);
    else
        stack = ft_new_stack_variable(argv);
    return (stack);
}