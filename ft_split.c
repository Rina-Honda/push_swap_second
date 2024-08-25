/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhonda <rhonda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 18:51:51 by rhonda            #+#    #+#             */
/*   Updated: 2024/08/26 01:41:21 by rhonda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

static int count_words(const char *str, char c)
{
    int i;
    int trigger;

    i = 0;
    trigger = 0;
    while (*str != '\0')
    {
        if (*str != c && trigger == 0)
        {
            trigger = 1;
            i++;
        }
        else if (*str == c)
            trigger = 0;
        str++;
    }
    return (i);
}

static char *word_dup(const char *str, int start, int finish)
{
    char *word;
    int i;

    i = 0;
    word = (char *)malloc(sizeof(char) * (finish - start + 1));
    while (start < finish)
    {
        word[i] = str[start];
        i++;
        start++;
    }
    word[i] = '\0';
    return (word);
        
}

size_t ft_strlen(const char *str)
{
    size_t i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

char **ft_split(char const *s, char c)
{
    size_t i;
    size_t j;
    int index;
    char    **splited;

    splited = (char **)malloc(sizeof(char *) * count_words(s, c) + 1);
    if (s == NULL || splited == NULL)
        return (0);
    i = 0;
    j = 0;
    index = -1;
    while (i <= ft_strlen(s))
    {
        if (s[i] != c && index < 0)
            index = i;
        if (s[i] == c || (i == ft_strlen(s) && index >= 0))
        {
            splited[j++] = word_dup(s, index, i);
            index = -1;
        }
        i++;
    }
    splited[j] = 0;
    return(splited);
}
