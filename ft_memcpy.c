#include <stdlib.h>

void	*ft_memcpy(void *destination, const void *source, size_t num)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	if (destination == NULL && source == NULL)
	{
		return (NULL);
	}
	d = (unsigned char *)destination;
	s = (const unsigned char *)source;
	if (d == s || num == 0)
		return (destination);
	i = 0;
	while (i < num)
	{
		d[i] = s[i];
		i++;
	}
	return (destination);
}

// #include <stdio.h>
// int main()
// {
// 	// Test cases for ft_memcpy
// 	char src1[] = "Hello, World!";
// 	char dest1[20];
// 	ft_memcpy(dest1, src1, 13);
// 	printf("Test1: %s\n", dest1); // Expected: "Hello, World!"

// 	char src2[] = "1234567890";
// 	char dest2[10];
// 	ft_memcpy(dest2, src2, 5);
// 	dest2[5] = '\0'; // Null-terminate for printing
// 	printf("Test2: %s\n", dest2); // Expected: "12345"

// 	// Overlapping regions (undefined behavior in standard memcpy, but let's see what happens)
// 	char overlap[] = "abcdef";
// 	ft_memcpy(overlap + 2, overlap, 4);
// 	overlap[6] = '\0'; // Null-terminate for printing
// 	printf("Test3 (overlap): %s\n", overlap); // Result may vary

// 	return 0;
// }