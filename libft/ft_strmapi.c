/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 22:38:46 by gabd-el-          #+#    #+#             */
/*   Updated: 2022/12/26 19:54:47 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

int ft_strlen(char *s)
{
    int i;
    i = 0;
    while (s[i] != '\0')
        i++;
    return i;
}

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char *ret;
    int i;

    if (!(ret = malloc(sizeof(char) * ft_strlen((char *)s) + 1)) || !s)
        return (NULL);
    i = 0;
    while (s[i] != '\0')
    {
        ret[i] = f(i, s[i]);
        i++;
    }
    ret[i] = '\0';
    return (ret);
}