/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 12:41:57 by gabd-el-          #+#    #+#             */
/*   Updated: 2022/12/26 19:40:39 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t x;
    size_t dstlen;

    dstlen = ft_strlen(dst);
    x = 0;
    if (size == 0) return (ft_strlen((char *)src));
    else
    {
        if (size <= dstlen)
        {
            while (x < size - 1)
            {
                if (src[x] != '\0') dst[x] = src[x];
                else
                    dst[x] = '\0';
                x++;
            }
            while (dst[x] != '\0') dst[x++] = '\0'; 
        }   
    }
    return (ft_strlen((char *)src));
}
