#include "get_next_line.h"

int	ft_strlen(char const *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin_free(char *s1, char *s2)
{
	int	i; 
	int	j;
	int len;

	i = 0;
	j = 0;
	len = ft_strlen(s1) + ft_strlen(s2);
	char *joined = malloc(len + 1);
	if (!joined)
    {
        free(joined);
        free(s1);
        return (NULL);
    }
	while (s1 && s1[i])
	{
		joined[i] = s1[i];
		i++;
	}
	while (s2 && s2[j])
		joined[i++] = s2[j++];
	joined[i] = '\0';
	free(s1);
	return (joined);
}

char	*ft_strchr(char *s, int c)
{
	if (!s)
		return (NULL);
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (NULL);
}