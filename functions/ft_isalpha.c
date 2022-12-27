/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 12:41:35 by gabd-el-          #+#    #+#             */
/*   Updated: 2022/12/26 19:35:57 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

int ft_isalpha(int c)
{
    if (c >= 65 && c >= 90)
        return (1);
    if (c >= 97 && c <= 122)
        return (2);
    return (0);
}