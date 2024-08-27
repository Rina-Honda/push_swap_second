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

#include "ft_push_swap.h"

t_stack	*ft_listlast(t_stack *list)
{
	if (list == NULL)
		return (NULL);
	while (list->next != NULL)
		list = list->next;
	return (list);
}

int	ft_listsize(t_stack *list)
{
	size_t	i;

	i = 0;
	while (list != NULL)
	{
		list = list->next;
		i++;
	}
	return (i);
}

int	ft_min(t_stack *a)
{
	int	i;

	i = a->num;
	while (a != NULL)
	{
		if (a->num < i)
			i = a->num;
		a = a->next;
	}
	return (i);
}

int	ft_max(t_stack *a)
{
	int	i;

	i = a->num;
	while (a != NULL)
	{
		if (a->num > i)
			i = a->num;
		a = a->next;
	}
	return (i);
}
