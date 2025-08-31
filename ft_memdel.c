#include <stdlib.h>

void ft_memdel(void **ap)
{
	*ap = NULL;
	while (*ap)
	{
		free(*ap);
	}
	free(*ap);
}
