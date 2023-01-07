/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 18:01:43 by codespace         #+#    #+#             */
/*   Updated: 2022/12/26 19:33:48 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

int ft_strlen(char *s)
{
    int i;

    i = 0;
    while (s[i] != '\0')
    {
        i++;
    }
    return (i);
}

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *sub;
    unsigned int i;
    unsigned int s_len;

    i = 0;
    s_len = ft_strlen((char *)s);
    if (start > s_len)
    {
        if (!(sub = (char *)malloc(sizeof(char) * (1))))
            return (NULL);
        sub[i] = '\0';
        return (sub);
    }
    if (!(sub = (char *)malloc(sizeof(char) * (len + 1))))
        return (NULL);
    while (i < len)
    {
        sub[i] = s[start + i];
        i++;
    }
    sub[i] = '\0';
    return sub;
}