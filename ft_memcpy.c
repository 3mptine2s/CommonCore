#include <stdlib.h>

void * memcpy ( void * destination, const void * source, size_t num )
{
	char *s;
	char *d;

	d = destination;
	s = source;
	while (num--, *s++)
	{
		*d = *s;
		d++;
		s++;
	}
	return (destination);
}