/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 17:47:41 by gabd-el-          #+#    #+#             */
/*   Updated: 2022/12/26 19:29:55 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

int ft_strncmp(char *s1, char *s2, size_t n)
{
    size_t     i;

    i = 0;
    while (i < n && (s1[i] != '\0' && s2[i] != '\0'))
    {
        if (s1[i] > s2[i])
        {
            return (1);
        }
        else if (s1[i] < s2[i])
        {
            return (-1);
        }
        i++;   
    }
	return (0);
}

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char *x;
    unsigned char *y;
    size_t i;

    i = 0;
    x = (unsigned char*)s1;
    y = (unsigned char*)s2;
    while (i < n)
    {
        if (x[i] != y[i])
            return (x[i] - y[i]);
        i++;
    }
    return (0);
}