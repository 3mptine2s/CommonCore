#include <stdlib.h>

int ft_strnequ(char const *s1, char const *s2, size_t n)
{
    while (n && *s1 && *s2 && *s1 == *s2)
    {
        n--;
    }
    if (*s1 == *s2)
        return (1);
    return (0);
}
