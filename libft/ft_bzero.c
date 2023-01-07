/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 12:41:27 by gabd-el-          #+#    #+#             */
/*   Updated: 2023/01/07 16:52:54 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void ft_bzero(void *s, size_t n)
{
    size_t i;
    char *ptr;

    i = 0;
    ptr = (char *) s;
    if (n > 0)
    {
        while (i < n)
        {
            ptr[i++] = '\0';
        }   
    }
}