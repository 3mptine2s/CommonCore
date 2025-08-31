#include <stdlib.h>

int memcmp ( const void * ptr1, const void * ptr2, size_t num )
{
	unsigned char	*b1;
	unsigned char	*b2;

	b1 = ptr1;
	b2 = ptr2;
	while (num-- && *b1 == *b2)
	{
		*b1++;
		*b2++;
	}
	return (*b1 - *b2);
}
