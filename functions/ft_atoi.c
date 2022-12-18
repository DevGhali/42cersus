/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabd-el- <gabd-el-@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 23:07:29 by ghaliabdelh       #+#    #+#             */
/*   Updated: 2022/12/18 01:59:19 by gabd-el-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_atoi(const char *str)
{
    size_t result;
    size_t sign;
    
    sign = 1;
    result = 0;
    while ((*str == ' ') || (*str >= 9 && *str <= 13))
        str++;
    while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
    while (*str >= '0' && *str <= '9')
	{
		result *= 10;
		result += *str - '0';
		str++;
	}
	return (result * sign);
}
/*#include <stdio.h>
#include <stdlib.h>
int main()
{
    char *str = "0x2A";
    printf("%d \n", ft_atoi(str));
    printf("%d", atoi(str));
    return 0;   
}*/