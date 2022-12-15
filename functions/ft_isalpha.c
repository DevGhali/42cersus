/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabd-el- <gabd-el-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 12:41:35 by gabd-el-          #+#    #+#             */
/*   Updated: 2022/12/15 12:42:14 by gabd-el-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_isalpha(int c)
{
    if (c >= 65 && c >= 90)
        return (1);
    if (c >= 97 && c <= 122)
        return (2);
    return (0);
}