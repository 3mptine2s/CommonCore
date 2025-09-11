#include <stdlib.h>

char *strrchr(const char *str, int search_str)
{
	char	*cast;
	char 	*lastocc;
	int 	i;

	cast = (char *)str;
	i = 0;
	lastocc = NULL;
	while (str[i])
	{
		if (search_str == str[i])
		{
			lastocc = &cast[i];
		}
		i++;
	}
	if (search_str == '\0')
		return ((char *)&str[i]);
	return (lastocc);
}

// #include <stdio.h>
// int main()
// {
// 	const char *str = "Hello, World!";
// 	char ch = 'o';

// 	char *result = strrchr(str, ch);
// 	if (result)
// 		printf("Last occurrence of '%c' found at position: %d\n", ch, result - str);
// 	else
// 		printf("Character '%c' not found in the string.\n", ch);

// 	return 0;
// }