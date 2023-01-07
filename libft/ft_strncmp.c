/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 15:02:46 by gabd-el-          #+#    #+#             */
/*   Updated: 2022/12/26 19:40:07 by codespace        ###   ########.fr       */
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
