/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 16:37:24 by gabd-el-          #+#    #+#             */
/*   Updated: 2022/12/26 19:32:12 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    char x;
    char *ptr;

    x = (char) c;
    while (*s != '\0')
    {
        if (*s == x)
        {
            ptr = (char *)s;
        }
        s++;
    }
    if (*ptr == x)
    {
        return &(*ptr);
    }
    return (char *)NULL;
}
