/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 17:47:41 by gabd-el-          #+#    #+#             */
/*   Updated: 2022/12/18 15:19:13 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

int memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char *x;
    unsigned char *y;
    size_t i;
    int res;

    i = 0;
    x = (unsigned char *)s1;
    y = (unsigned char *)s2;
    while (i < n)
    {
        if (ft_strncmp(x[i], y[i], 1) != 0)
            return (ft_strncmp(x[i], y[i], 1));
        i++;
    }
    return (0);
}