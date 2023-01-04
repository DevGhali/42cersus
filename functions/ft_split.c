/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 00:38:46 by codespace         #+#    #+#             */
/*   Updated: 2023/01/04 14:51:47 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <stdlib.h>

static int is_char(char s, char c)
{
    if (s == c)
        return 1;
    return 0;
}

static char *ft_strdup2(char *s, int x)
{
    char *dup;
    size_t s_len;
    size_t i;

    i = 0;
    dup = malloc(sizeof(char) * (x + 1));
    if (dup == NULL)
        return (NULL);
    else
    {
        while (i < x && s[i])
        {
            dup[i] = s[i];
            i++;
        }
        dup[i] = '\0';
    }
    return (dup);
}

static int wordlen(char *str, char c)
{
    int    i;

    i = 0;
    while (str[i] && (str[i] != c))
        i++;
    return (i);
}

static char **make_words(char *s, char c, char **tab, size_t words_count)
{
    size_t i;
    size_t len;
    
    i = 0;
    while(i < words_count)
    {
        while(*s == c)
            s++;
        len = wordlen(s, c);
        tab[i] = ft_strdup2(s, len);
        if (!tab[i])
        {
            while (i > 0)
            {
                free(tab[i - 1]);
                i--;
            }
            free(tab);
            return (NULL);
        }
        s += len;
        i++;
    }
    tab[words_count] = 0;
    return tab;
}

static size_t count_words(char *s, char c)
{
    size_t i;
    size_t count;

    count = 0;
    i = 0;
    while (s[i] != '\0')
    {
       while (!(is_char(s[i], c)) && s[i] != '\0')
       {
            if (i == 0)
                count++;
            i++;
       }
       while (is_char(s[i], c))
       {
            if (!(is_char(s[i + 1], c)) && s[i + 1] != '\0')
                count++;
            i++;
       }
    }
    return (count);
}

char **ft_split(char const *s, char c)
{
    char **tab;
    size_t words_count;
    
    words_count = count_words((char *)s, c);
    if (!(tab = (char **)malloc(sizeof(char *) * words_count + 1)))
        return NULL;
    tab = make_words((char *)s, c, tab, words_count);
    return tab;
}

#include <stdio.h>

int main()
{
    char *s = "*aba**acsa**ghali **abcd ***1234";
    char c = '*';
    char **tab = ft_split(s, c);
    int x = 0;
    while (x <= 5)
    {
        printf("%s ", tab[x]);
        x++;
    }
    printf("\n");
    return (0);    
}