/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabd-el- <gabd-el-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 12:41:57 by gabd-el-          #+#    #+#             */
/*   Updated: 2022/12/15 14:42:30 by gabd-el-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t x;
    size_t dstlen;

    dstlen = ft_strlen(dst);
    x = 0;
    if (size == 0) return (ft_strlen((char *)src));
    else
    {
        if (size <= dstlen)
        {
            while (x < size - 1)
            {
                if (src[x] != '\0') dst[x] = src[x];
                else
                    dst[x] = '\0';
                x++;
            }
            while (dst[x] != '\0') dst[x++] = '\0'; 
        }   
    }
    return (ft_strlen((char *)src));
}

/*#include <string.h>
#include <stdio.h>
int main(void)
{
	char src[] = "f";
	char dest[] = "to here";
    char src1[] = "f";
	char dest1[] = "to here";
    printf("%zu\n", ft_strlcpy(dest, src, 2));
	printf("%zu\n", strlcpy(dest1, src1, 2));
    printf("%s\n", src); 
    printf("%s\n", dest);
    printf("%s\n", src1); 
    printf("%s\n", dest1);
	return 0;
}*/