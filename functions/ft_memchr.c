/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 17:48:23 by gabd-el-          #+#    #+#             */
/*   Updated: 2022/12/26 19:06:18 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char x;
    unsigned char *y;
    size_t i;

    i = 0;
    x = (unsigned char)c;
    y = (unsigned char *)s;
    while (i < n)
    {
        if (y[i] == x)
            return (y);
        i++;
    }
    return (NULL);
}