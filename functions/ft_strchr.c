/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabd-el- <gabd-el-@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 12:54:33 by gabd-el-          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/12/18 14:56:03 by gabd-el-         ###   ########.fr       */
=======
/*   Updated: 2022/12/16 23:17:30 by gabd-el-         ###   ########.fr       */
>>>>>>> ebc1bc3e566376173bcea1f6f97e656229f11d4b
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