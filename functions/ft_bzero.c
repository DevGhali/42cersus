#include <unistd.h>

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