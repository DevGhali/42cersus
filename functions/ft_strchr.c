/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabd-el- <gabd-el-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 12:54:33 by gabd-el-          #+#    #+#             */
/*   Updated: 2022/12/18 14:56:03 by gabd-el-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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