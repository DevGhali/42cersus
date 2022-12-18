/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 12:02:41 by codespace         #+#    #+#             */
/*   Updated: 2022/12/18 12:32:26 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

char *strdup(const char *s)
{
    char *dup;
    size_t s_len;
    size_t i;

    i = 0;
    s_len = ft_strlen(s);
    dup = malloc(sizeof(char) * (s_len + 1));
    if (dup == NULL)
        return (NULL);
    else
    {
        while (i < s_len)
        {
            dup[i] = s[i];
            i++;
        }
        dup[i] = "\0";
    }
    return (dup);
}