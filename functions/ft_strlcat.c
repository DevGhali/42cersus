/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabd-el- <gabd-el-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 12:41:55 by gabd-el-          #+#    #+#             */
/*   Updated: 2022/12/18 15:05:29 by gabd-el-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

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

size_t ft_strlcat(char *dest, const char *src, size_t size)
{
    size_t    x;
    size_t    y;
    size_t    dest_len;
    size_t    src_len;

    x = 0;
    y = 0;
    dest_len = ft_strlen(dest);
    src_len = ft_strlen(src);
    if (size <= dest_len)
        return (size + src_len);
    y = ft_strlen(dest);
    while (src[x] != '\0' && x < size - dest_len - 1)
    {
        dest[y] = src[x];
        x++;
        y++;
    }
    dest[y] = '\0';
    return (dest_len + src_len);
}


/*#include <string.h>
#include <stdio.h>
int main(void)
{
	char src[100] = "from he";
	char dest[100] = "to";
    char src1[100] = "from he";
	char dest1[100] = "to";
    printf("%zu\n", ft_strlcat(dest, src, 1));
	printf("%zu\n", strlcat(dest1, src1, 1));
    printf("%s\n", src); 
    printf("%s\n", dest);
    printf("%s\n", src1); 
    printf("%s\n", dest1);
	return 0;
}*/