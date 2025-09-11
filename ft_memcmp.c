#include <stdlib.h>

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t num)
{
	const unsigned char		*b1;
	const unsigned char		*b2;
	size_t					i;

	b1 = (const unsigned char *)ptr1;
	b2 = (const unsigned char *)ptr2;
	i = 0;
	if (num == 0)
		return (0);
	
	while (i < num)
	{
		if (b1[i] != b2[i])
			return (b1[i] - b2[i]);
		i++;
	}
	return (0);
}

// #include <stdio.h>
// int main()
// {
// 	const char *str1 = "Hello, World!";
// 	const char *str2 = "Hello, World!";
// 	const char *str3 = "Helloa, World?";
// 	size_t num = 13;

// 	int result1 = ft_memcmp(str1, str2, num);
// 	int result2 = ft_memcmp(str1, str3, num);

// 	printf("Comparison of identical strings: %d\n", result1); // Expected: 0
// 	printf("Comparison of different strings: %d\n", result2); // Expected: negative value

// 	return 0;
// }