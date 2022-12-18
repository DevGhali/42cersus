/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabd-el- <gabd-el-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 12:41:44 by gabd-el-          #+#    #+#             */
/*   Updated: 2022/12/18 14:58:09 by gabd-el-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void *ft_memcpy(void *dst, const void *src, size_t n)
{
    size_t i;
    unsigned char *ptr1;
    unsigned char *ptr2;

    ptr1 = (unsigned char *)dst;
    ptr2 = (unsigned char *)src;
    i = 0;
    while (i < n)
    {
        ptr1[i] = ptr2[i];
        i++;
    }
    return (dst);
}