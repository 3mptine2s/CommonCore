#include <stdlib.h>
void * memmove(void *to, const void *from, size_t numBytes)
{
	char *s;
	char *d;
	char *middle;
	char *begin;

	d = to;
	s = from;
	*middle = (char) *s;
	begin = middle;
	while (*middle)
	{
		*middle = *s;
		middle++;
		s++;
	}
	middle = begin;
	while (numBytes--)
	{
		*d = *middle;
		d++;
		middle++;
	}
	return (to);
}
