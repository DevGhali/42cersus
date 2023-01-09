/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fedora <fedora@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 12:43:45 by ghaliabdelh       #+#    #+#             */
/*   Updated: 2023/01/08 23:42:50 by fedora           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	x;
	size_t	y;

	x = 0;
	y = 0;
	if (!needle[x])
		return ((char *)haystack);
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
			return ((char *)&haystack[y - len]);
	}
	return (NULL);
}
