/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabd-el- <gabd-el-@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 20:21:37 by codespace         #+#    #+#             */
/*   Updated: 2022/12/22 12:43:30 by gabd-el-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

int test(int x)
{
    if (x < 0)
        return (1);
    return (0);
}
int ft_abs(int x)
{
    if (x < 0)
        x *= -1;
    return (x);
}
int count(int n)
{
    int res;

    res = 0;
    if (n == -2147483648)
        return 11;
    if (n == 0)
        return (1);
    if (n < 0)
    {
        res++;
        n *= -1;
    }
    while (n > 0)
    {
        res++;
        n /= 10;
    }
    return (res);
}
void fill_str(char *str, int n, int res)
{
    if (n == 0)
        str[0] = '0';      
    if (n < 0)
    {
        str[0] = '-';
        n = ft_abs(n);       
    }
    res--;
    while (n > 0)
    {
        str[res--] = (n % 10) + '0';
        n /= 10;
    } 
}
char *ft_itoa(int n)
{
    char *str;
    int res;
    
    res = count(n);
    if (!(str = malloc(sizeof(char) * (res + 1))))
        return (NULL);
    if (n == -2147483648)
    {
        str[0] = '-';
        str[1] = '2';
        n = 147483648;
    }
    fill_str(str, n, res);
    str[res + 1] = '\0';
    return str;
}

#include <stdlib.h>
#include <stdio.h>
int main()
{
    int x = 2147483647;
    printf("%s\n", ft_itoa(x));
    return 0;
}
