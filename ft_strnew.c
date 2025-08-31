#include <stdlib.h>

char * ft_strnew(size_t size)
{
	char *new;
	int i;

	i = 0;
	new = malloc(sizeof(char) * size);
	while (i < size)
	{
		new[i] = '\0';
		i++;
	}
	new[i] = '\0';
	return (new);
}
