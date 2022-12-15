#include <unistd.h>
#include <stdio.h>


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
    size_t y;
    size_t dstlen;
    size_t srclen;

    dstlen = ft_strlen(dst);
    srclen = ft_strlen((char *)src);
    x = 0;
    y = 0;
    if (size == 0)
    {
        return (srclen);
    }
    if (size < dstlen)
    {
        while (x < size)
        {
            if (src[x] != '\0')
            {
                dst[x] = src[x];  
            }
            else
            {
                dst[x] = '\0';
            }
            x++;
        }
    }
    return (srclen);
}


#include <string.h>
int main(void)
{
	char src[100] = "from here";
	char dest[100] = "toad";
    char src1[100] = "from here";
	char dest1[100] = "toad";
    printf("%zu\n", ft_strlcpy(dest, src, 2));
	printf("%zu\n", strlcpy(dest1, src1, 2));
    printf("%s\n", src); 
    printf("%s\n", dest);
    printf("%s\n", src1); 
    printf("%s\n", dest1);
	return 0;
}