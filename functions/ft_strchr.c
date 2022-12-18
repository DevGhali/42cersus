/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabd-el- <gabd-el-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 15:03:06 by gabd-el-          #+#    #+#             */
/*   Updated: 2022/12/18 15:05:18 by gabd-el-         ###   ########.fr       */
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

/*#include <stdio.h>
int main() 
{
    const char *str = "heea";
    char  c;
   
    c = 'w';
    printf("Found letter:%c\n", *ft_strchr(str, c));
    //*ft_strchr(str, c);
    return (0);
}*/