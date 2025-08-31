#include <stdlib.h>

char *strchr(const char *str, int search_str)
{
	char *lastocc;

	lastocc = NULL;
	while (*str)
	{
		if (search_str == *str)
		{
			lastocc = str;
		}
		str++;
	}
	return (lastocc);
}