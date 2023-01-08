/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabd-el- <gabd-el-@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 18:28:24 by gabd-el-          #+#    #+#             */
/*   Updated: 2022/12/22 18:33:37 by gabd-el-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void ft_putendl_fd(char *s, int fd)
{
    if (!s || fd < 0)
    {
        return ;
    }
    write(fd, s, ft_strlen(s));
    write(fd, "\n", 1);
}