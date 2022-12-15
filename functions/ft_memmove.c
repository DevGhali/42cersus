/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabd-el- <gabd-el-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 12:41:47 by gabd-el-          #+#    #+#             */
/*   Updated: 2022/12/15 12:42:24 by gabd-el-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void *ft_memmove(void *dst, const void *src, size_t len)
{
    size_t i;
    unsigned char *ptr1;
    unsigned char *ptr2;

    ptr1 = (unsigned char *)dst;
    ptr2 = (unsigned char *)src;
    i = 0;
    if (ptr1 > ptr2)
    {
        while (len > 0)
        {
            ptr1[len] = ptr2[len];
            len--;   
        }
    }
    else
    {
        while (i < len)
        {
            ptr1[i] = ptr2[i];
            i++;   
        }
    }
    return (dst);
}