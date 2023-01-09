/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fedora <fedora@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 16:37:24 by gabd-el-          #+#    #+#             */
/*   Updated: 2023/01/08 23:34:23 by fedora           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	x;
	char	*ptr;

	x = (char) c;
	while (*s != '\0')
	{
		if (*s == x)
		{
			ptr = (char *)s;
		}
		s++;
	}
	if (*ptr == x)
	{
		return (&(*ptr));
	}
	return ((char *) NULL);
}
