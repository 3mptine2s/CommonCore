#include <stdlib.h>
void* memccpy( void* restrict dest, const void* restrict src, int c, size_t count )
{
	char *s;
	char *d;

	d = dest;
	s = src;
	while (count-- || (*s++ && (*s != c)))
	{
		*d = *s;
		d++;
		s++;
	}
	return (dest);
}