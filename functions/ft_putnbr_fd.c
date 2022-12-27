/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 18:38:31 by gabd-el-          #+#    #+#             */
/*   Updated: 2022/12/26 19:28:16 by codespace        ###   ########.fr       */
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

void ft_putnbr_fd(int n, int fd)
{
    if (fd < 0)
        return ;
    if (n == -2147483648)
    {
        write(fd, "-", 1);
        write(fd, "2", 1);
        ft_putnbr_fd(147483648, fd);
    }
    else if (n >= 0 && n < 10)
        ft_putchar_fd(n + '0', fd);   
    else if(n < 0)
    {
        write(fd, "-", 1);
        ft_putnbr_fd(n * -1, fd);   
    }
    else
    {
        ft_putnbr_fd(n / 10, fd);
        ft_putnbr_fd(n % 10, fd);
    }       
}