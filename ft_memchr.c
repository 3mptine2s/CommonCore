#include <stdlib.h>

void	*ft_memchr(const void *ptr, int ch, size_t count)
{
	const unsigned char	*s;
	unsigned char		c;
	size_t				i;

	s = (const unsigned char *)ptr;
	c = (unsigned char)ch;
	i = 0;
	while (i < count)
	{
		if (s[i] == c)
			return ((void *)(&s[i]));
		i++;
	}
	return (NULL);
}

// #include <stdio.h>
// int main()
// {
//     const char str[] = "Hello, World!";
//     char ch = 'W';
//     size_t count = 13;

//     char *result = (char *)ft_memchr(str, ch, count);
//     if (result)
//         printf("Character '%c' found at position: %d\n", ch, result - str);
//     else
//         printf("Character '%c' not found in the first %zu bytes.\n", ch, count);

//     return 0;
// }