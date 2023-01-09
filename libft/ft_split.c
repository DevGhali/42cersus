/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fedora <fedora@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 00:38:46 by codespace         #+#    #+#             */
/*   Updated: 2023/01/09 01:47:27 by fedora           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strdup2(char *s, int x)
{
	char	*dup;
	size_t	s_len;
	size_t	i;

	i = 0;
	dup = malloc(sizeof(char) * (x + 1));
	if (dup == NULL)
		return (NULL);
	else
	{
		while (i < x && s[i])
		{
			dup[i] = s[i];
			i++;
		}
		dup[i] = '\0';
	}
	return (dup);
}

static int	wordlen(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] && (str[i] != c))
		i++;
	return (i);
}

static char	**make_words(char *s, char c, char **tab, size_t words_count)
{
	size_t	i;
	size_t	len;

	i = 0;
	while (i < words_count)
	{
		while (*s == c)
			s++;
		len = wordlen(s, c);
		tab[i] = ft_strdup2(s, len);
		if (!tab[i])
		{
			while (i > 0)
			{
				free(tab[i - 1]);
				i--;
			}
			free(tab);
			return (NULL);
		}
		s += len;
		i++;
	}
	tab[words_count] = 0;
	return (tab);
}

static size_t	count_words(char *s, char c)
{
	size_t	i;
	size_t	count;

	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		while (s[i] != c && s[i] != '\0')
		{
			if (i == 0)
				count++;
			i++;
		}
		while (s[i] == c)
		{
			if (s[i + 1] != c && s[i + 1] != '\0')
				count++;
			i++;
		}
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	size_t	words_count;

	words_count = count_words((char *)s, c);
	tab = (char **)malloc(sizeof(char *) * words_count + 1);
	if (tab == NULL)
		return (NULL);
	tab = make_words((char *)s, c, tab, words_count);
	return (tab);
}
