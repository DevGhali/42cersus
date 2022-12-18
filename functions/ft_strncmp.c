#include <unistd.h>

int ft_strncmp(char *s1, char *s2, size_t n)
{
    size_t     i;

    i = 0;
    while (i < n && (s1[i] != '\0' && s2[i] != '\0'))
    {
        if (s1[i] > s2[i])
        {
            return (1);
        }
        else if (s1[i] < s2[i])
        {
            return (-1);
        }
        i++;   
    }
	return (0);
}

/*#include <string.h>
#include <stdio.h>
int main(void)
{
	char str1[] = "1";
	char str2[] = "12";
    
    printf("%d\n", ft_strncmp(str1, str2, 0));
	printf("%d\n", strncmp(str1, str2, 0));
	return 0;
}*/