#include <stdlib.h>

char * ft_substr(char const *s, unsigned int start, size_t len)
{
    char		*sub;
	size_t		pos;
	int			i;

	i = 0;
	pos = start;
	if (s[start + len])
	{
		sub = (char *)malloc(sizeof(char) * (len + 1));
		if (!sub)
			return (NULL);
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

// #include <stdio.h>
// int main()
// {
// 	char *s = "Hello, World!";
// 	unsigned int start = 7;
// 	size_t len = 5;
// 	char *result = ft_substr(s, start, len);
// 	if (result)
// 	{
// 		printf("Substring: %s\n", result); // Expected: "World"
// 		free(result);
// 	}
// 	return 0;
// }