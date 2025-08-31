#include <stdlib.h>

char * ft_strtrim(char const *s)
{
	char 	*trimmed;
	int		i;
	int		k;

	k = 0;
	i = 0;
	while (s[i])
		i++;
	trimmed = malloc(((sizeof(char)) * i) + 1);
	i = 0;
	if (!trimmed)
	{
		trimmed = NULL;
		return (trimmed);
	}
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	while (s[i] && !(s[i] == ' ' || s[i] == '\n' || s[i] == '\t'))
	{
		trimmed[k] = s[i];
		i++;
		k++;
	}
	trimmed[k] = '\0';
	return (trimmed);
}