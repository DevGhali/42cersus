/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabd-el- <gabd-el-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 16:37:24 by gabd-el-          #+#    #+#             */
/*   Updated: 2022/12/18 14:58:02 by gabd-el-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char *ft_strrchr(const char *s, int c)
{
    char x;
    char *ptr;

    x = (char) c;
    while (*s != '\0')
    {
        if (*s == x)
        {
            ptr = (char *)s;
        }
        s++;
    }
    if (*ptr == x)
    {
        return &(*ptr);
    }
    return (char *)NULL;
}

/*#include <stdio.h>
int main()
{
    const char *str = "heea";
    char  c;

    c = 'q';
    printf("Found letter:%c\n", *ft_strrchr(str, c));
    //*ft_strchr(str, c);
    return (0);
}*/