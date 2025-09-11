unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dlen;
	unsigned int	slen;
	unsigned int	i;

	dlen = 0;
	slen = 0;
	i = 0;
	if (size <= dlen)
		return (slen + size);
	while (dest[dlen])
		dlen++;
	while (src[slen])
		slen++;
	while (src[i] && i < size - dlen - 1)
	{
		dest[dlen + i] = src[i];
		i++;
	}
	dest[dlen + i] = '\0';
	return (dlen + slen);
}

// #include <stdio.h>
// int main()
// {
// 	char dest[20] = "Hello, ";
// 	char src[] = "World!";
// 	unsigned int size = 15;

// 	unsigned int result = ft_strlcat(dest, src, size);
// 	printf("Result: %u\n", result); // Expected: 13 (length of "Hello, " + length of "World!")
// 	printf("Dest after strlcat: %s\n", dest); // Expected: "Hello, World!"

// 	return 0;
// }