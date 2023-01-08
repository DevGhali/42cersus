/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 18:46:18 by codespace         #+#    #+#             */
/*   Updated: 2022/12/21 20:38:41 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char *ft_strjoin(char const *s1, char const *s2)
{
    char *ret;
    int x;
    int y;

    x = 0;
    y = 0;
    if (!(ret = malloc(sizeof(char) * (ft_strlen((char *)s1) + ft_strlen((char *)s2 + 1)))))
        return (NULL);
    while (s1[x] != '\0')
    {
        ret[x] = s1[x];
        x++;
    }
    while (s2[y] != '\0')
    {
        ret[x++] = s2[y++];
    }
    ret[ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1] = '\0';
    return (ret);
}

#include <stdio.h>
int main()
{
    char *s1 = "Hello";
    char *s2 = "World";
    char *ret;

    ret = ft_strjoin(s1, s2);
    printf("%s\n", ret);
    return (0);
}