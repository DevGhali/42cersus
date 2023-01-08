/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 11:53:20 by codespace         #+#    #+#             */
/*   Updated: 2022/12/23 12:28:35 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void ft_putchar_fd(char c, int fd)
{
    if (fd < 0)
        return ;
    write(fd, &c, 1);
}

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    unsigned int i;

    i = 0;
    if(!s || !f)
        return ;
    while (s[i] != '\0')
    {
        f(i, s);
        i++;
    }
}
int main()
{
    char *str = "hello";
    void (*f)(unsigned int, char*);
    f = &ft_putchar_fd;
    ft_striteri(str, f);
    return (0);
}