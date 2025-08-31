#include <stdlib.h>

char * ft_strsub(char const *s, unsigned int start, size_t len)
{
    char	*sub;
	int		pos;
	int		i;

	i = 0;
	pos = start;
	if (s[start + len])
	{
		sub = (char *)malloc(sizeof(char) * (len + 1));
		while (pos < start + len)
		{
			sub[i] = s[pos];
			pos++;
			i++;
		}
	}
	sub[i] = '\0';
	return (sub);
}
