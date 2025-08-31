#include <stdlib.h>

char	*strnstr(const char *big,	const char *little, size_t len)
{
	int	c;
	int	d;

	c = 0;
	d = 0;
	if (little[0] == '\0')
		return (big);
	while (big[c] != '\0' && len)
	{
		while (big[c + d] == little[d])
		{
			if (little[d + 1] == '\0')
				return (&big[c]);
			d++;
		}
		d = 0;
		c++;
        len--;
	}
	return (0);
}
