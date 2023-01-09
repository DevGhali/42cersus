/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fedora <fedora@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 12:41:55 by gabd-el-          #+#    #+#             */
/*   Updated: 2023/01/08 23:31:01 by fedora           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	x;
	size_t	y;
	size_t	dest_len;
	size_t	src_len;

	x = 0;
	y = 0;
	dest_len = ft_strlen(dest);
	src_len = ft_strlen((char *)src);
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
