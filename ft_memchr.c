#include <stdlib.h>

void* memchr( const void* ptr, int ch, size_t count )
{
    char			*str;
    unsigned char	chr;
    
	chr = ch;
	str = ptr;
    while (str++)
    {
		if (*str == chr)
		{
			return (str);
		}
    }
    return (NULL);
}