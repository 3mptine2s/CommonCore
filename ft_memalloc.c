#include <stdlib.h>
void * ft_memalloc(size_t size)
{
	unsigned char *mem;
	int	i;

	i = 0;
	if (size <= 0)
		return (NULL);
	mem = malloc(size);
	if (!mem)
		return (NULL);
	while (i < size)
	{
		mem[i] = 0;
		i++;
	}
	return ((void *)mem);
}
