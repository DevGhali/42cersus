/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fedora <fedora@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 20:21:37 by codespace         #+#    #+#             */
/*   Updated: 2023/01/10 01:25:17 by fedora           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_abs(int x)
{
	if (x < 0)
		x *= -1;
	return (x);
}

static int	count(int n)
{
	int	res;

	res = 0;
	if (n == -2147483648)
		return (11);
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

static void	fill_str(char *str, int n, int res)
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

char	*ft_itoa(int n)
{
	char	*str;
	int		res;

	res = count(n);
	str = malloc(sizeof(char) * (res + 1));
	if (str == NULL)
		return (NULL);
	if (n == -2147483648)
	{
		str[0] = '-';
		str[1] = '2';
		n = 147483648;
	}
	fill_str(str, n, res);
	str[res + 1] = '\0';
	return (str);
}
