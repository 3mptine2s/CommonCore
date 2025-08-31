#include <stdlib.h>

void ft_strdel(char **as)
{
	if (as && *as)
	{
		*as = NULL;
		free(*as);
		*as++;
	}
	*as = NULL;
	free(*as);
}
