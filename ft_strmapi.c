#include <stdio.h>
#include <stdlib.h>

char * ft_strmapi(char const *s, char(*f)(unsigned int, char))
	{
	int		len;
	int		i;
	char	*result;

	len = 0;
	i = 0;
	if (!s || !f)
		return (NULL);
	while (s[len])
		len++;
	result = (char *) malloc(sizeof(char) * (len + 1));	
	if (!result)
		return (NULL);
	while (result[i])
	{
		result[i] = f(i,s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}
