/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabd-el- <gabd-el-@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 13:04:11 by gabd-el-          #+#    #+#             */
/*   Updated: 2022/12/22 13:14:02 by gabd-el-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void ft_putstr_fd(char *s, int fd)
{
    int x;

    x = 0;
    if (fd < 0 || !s)
        return ;
    while (s[x] != '\0')
    {
        ft_putchar_fd(s[x], fd);
        x++;
    }
}