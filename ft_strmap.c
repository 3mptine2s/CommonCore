#include <stdlib.h>

static char f(char c)
{
	c = (malloc(sizeof(char)));
	return (c);
}

char * ft_strmap(char const *s, char (*f)(char))
{
	int i;

	i = 0;
	while (s[i])
	{
		f(s[i]);
		i++;
	}
	return (s);
}