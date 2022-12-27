#include "libft.h"
#include <unistd.h>
#include <stdlib.h>

void ft_bzero(void *s, size_t n)
{
    size_t i;
    char *ptr;

    i = 0;
    ptr = (char *) s;
    if (n > 0)
    {
        while (i < n)
        {
            ptr[i++] = '\0';
        }   
    }
}

void *ft_calloc(size_t nmemb, size_t size)
{
    void *ptr;
    
    if (nmemb == 0 || size == 0)
        return (NULL);
    ptr = malloc(nmemb * size);
    if (ptr == NULL)
        return (ptr);
    ft_bzero(ptr, size * nmemb);
    return (ptr);
}

int ft_strlen(char *s)
{
    int i;

    i = 0;
    while (s[i])
        i++;
    return (i);
}

static int	ischar(char c, const char *set)
{
	size_t	i;

	i = 0;
	while (*(set + i))
		if (*(set + i++) == c)
			return (1);
	return (0);
}

static char	*trimming(const char *s1, const char *set, size_t *k, size_t i)
{
	size_t	j;
	size_t	len;
	char	*dst;

	len = ft_strlen((char *)s1);
	j = 0;
	while (ischar(*(s1 + len - j - 1), set))
		j++;
	if ((dst = ft_calloc(sizeof(char), len - (j + i) + 1)) == NULL)
		return (NULL);
	while (*k < len - (j + i))
	{
		*(dst + *k) = *(s1 + i + *k);
		*k += 1;
	}
	return (dst);
}

char		*ft_strtrim(const char *s1, const char *set)
{
	size_t	i;
	size_t	k;
	size_t	len;
	char	*dst;

	if (s1 == NULL)
		return (NULL);
	i = 0;
	len = ft_strlen((char *)s1);
	while (ischar(*(s1 + i), set))
		i++;
	k = 0;
	if (i == len)
		dst = malloc(1);
	else
		dst = trimming(s1, set, &k, i);
	if (dst != NULL)
		*(dst + k) = '\0';
	return (dst);
}


#include <stdio.h>
int main()
{
    char *str = "aaaa abcHelloabc  aa  ";
    char *set = "";
    char *ret = ft_strtrim(str, set);
    printf("%s\n", ret);
    return (0);
}