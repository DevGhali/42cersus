/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 15:03:06 by gabd-el-          #+#    #+#             */
/*   Updated: 2022/12/26 19:29:44 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    char x;

    x = (char) c;
    while (*s != '\0')
    {
        if (*s == x)
        {
            return ((char *)s);
        }
        s++;
    }
    return (char *)NULL;
}