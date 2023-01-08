/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 18:46:40 by codespace         #+#    #+#             */
/*   Updated: 2023/01/04 14:51:55 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

int ft_strlen(char *str)
{
    int     i;

    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}


size_t ft_strlcat(char *dest, const char *src, size_t size)
{
    size_t    x;
    size_t    y;
    size_t    dest_len;
    size_t    src_len;

    x = 0;
    y = 0;
    dest_len = ft_strlen(dest);
    src_len = ft_strlen((char *)src);
    if (size <= dest_len)
        return (size + src_len);
    y = ft_strlen(dest);
    while (src[x] != '\0' && x < size - dest_len - 1)
    {
        dest[y] = src[x];
        x++;
        y++;
    }
    dest[y] = '\0';
    return (dest_len + src_len);
}


char *prefix(char *s1, char *set)
{
    size_t i;

    i = 0;
    while (s1[i] == set[i])
        i++;
    if (i == ft_strlen(set))
        return &s1[i];
    return (s1);
}

char *suffix(char *prefixed, char *set)
{
    char *ret;
    int i;
    int prefixed_len;
    int set_len;

    prefixed_len = ft_strlen(prefixed);
    set_len = ft_strlen(set) ;
    i = 0;
    while (set_len > 0)
    {
        set_len--;
        prefixed_len--;
        if (set[set_len] == prefixed[prefixed_len])
        {
            i++;
        }

    }
    if (i == ft_strlen(set))
    {
        if (!(ret = (char *)malloc(sizeof(char) * (ft_strlen(prefixed) - i + 1))))
            return (NULL);
        ft_strlcat(ret, prefixed, ft_strlen(prefixed) - i + 1);
        return (ret);
    }
    else
        return (prefixed);
}

char *ft_strtrim(char const *s1, char const *set)
{
    char *ret;
    if (ft_strlen((char *)set) == 0)
        return ((char *)s1);
    
    ret = prefix((char *)s1, (char *)set);
    ret = suffix(ret, (char *)set);
    return (ret);
}

#include <stdio.h>
int main()
{
    char *str = "aaaa abcHelloabc  aa  aaa";
    char *set = "a";
    char *ret = ft_strtrim(str, set);
    printf("%s\n", ret);
    return (0);
}