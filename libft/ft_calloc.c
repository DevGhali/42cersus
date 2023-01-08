/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 15:51:37 by gabd-el-          #+#    #+#             */
/*   Updated: 2023/01/07 16:52:55 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
    void *ptr;
    
    if (nmemb == 0 || size == 0)
        return (NULL);
    ptr = malloc(nmemb * size);
    if (ptr == NULL)
        return (ptr);
    ft_bzero(ptr, size * nmemb);
    return (ptr);
}