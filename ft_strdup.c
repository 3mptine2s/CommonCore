#include <stdio.h>
#include <stdlib.h>

char *ft_strdup(const char *s)
{
	int i;
	char *dup;

	i = 0;
	while (s[i] != '\0')
		i++;
	dup = (char *)malloc(sizeof(char) * (i + 1));
	if (!dup)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		dup[i] = s[i];
		i++;
	}
	return ((char *)dup);
}