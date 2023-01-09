/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fedora <fedora@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 18:46:40 by codespace         #+#    #+#             */
/*   Updated: 2023/01/08 23:57:58 by fedora           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*prefix(char *s1, char *set)
{
	size_t	i;

	i = 0;
	while (s1[i] == set[i])
		i++;
	if (i == ft_strlen(set))
		return (&s1[i]);
	return (s1);
}

static char	*suffix(char *prefixed, char *set)
{
	char	*ret;
	int		i;
	int		prefixed_len;
	int		set_len;

	prefixed_len = ft_strlen(prefixed);
	set_len = ft_strlen(set);
	i = 0;
	while (set_len > 0)
	{
		set_len--;
		prefixed_len--;
		if (set[set_len] == prefixed[prefixed_len])
			i++;
	}
	if (i == ft_strlen(set))
	{
		ret = (char *)malloc(sizeof(char) * (ft_strlen(prefixed) - i + 1));
		if (ret == NULL)
			return (NULL);
		ft_strlcat(ret, prefixed, ft_strlen(prefixed) - i + 1);
		return (ret);
	}
	return (prefixed);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ret;

	if (ft_strlen((char *)set) == 0)
		return ((char *)s1);
	ret = prefix((char *)s1, (char *)set);
	ret = suffix(ret, (char *)set);
	return (ret);
}
