/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabd-el- <gabd-el-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 12:43:45 by ghaliabdelh       #+#    #+#             */
/*   Updated: 2022/12/18 14:58:02 by gabd-el-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t x;
    size_t y;

    x = 0;
    y = 0;
    if (!needle[x])
        return (char *)(haystack);
    else
    {
        while (needle[x] != '\0' && x < len)
        {
            if (needle[x] == haystack[y])
                x++;
            else
                x = 0;
            y++;
        }
        if (x < len + 1)
            return (char *)&haystack[y - len];
    }
    return (NULL);
}

#include <stdio.h>
int main()
{
    char *haystack = "hello there my nme is ghali name";
    char *needle = "name";
    size_t i = 1;
    
    printf("%s", ft_strnstr(haystack, needle, i));
    
    return 0;
}