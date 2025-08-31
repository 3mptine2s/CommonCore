#include <stdlib.h>

char *strchr(const char *str, int search_str)
{
	while (*str)
	{
		if (search_str == *str)
		{
			return (str);
		}
		
		str++;
	}
	return (NULL);
}