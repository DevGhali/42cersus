#include <unistd.h>

void *ft_memcpy(void *dst, const void *src, size_t n)
{
    size_t i;
    unsigned char *ptr1;
    unsigned char *ptr2;

    ptr1 = (unsigned char *)dst;
    ptr2 = (unsigned char *)src;
    i = 0;
    while (i < n)
    {
        ptr1[i] = ptr2[i];
        i++;
    }
    return (dst);
}