#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>

void	bzero(void *s, size_t n)
{
	unsigned char		*ptr;
	size_t				i;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}

// int main()
// {
// 	int i;
// 	char *hello = "hahaha"; // Now it's a writable array, not a literal
	
// 	printf("before bzero: %s\n", hello);
// 	bzero(hello, 3);
// 	i = 0;
// 	// printf("%s\n", hello); // Prints only part of the string ("aha")
// 	// puts(hello);
// 	// write version (with correct pointer increment)
// 	char *p = hello;
// 	while (hello[i])
// 	{
// 		write(1, &hello[i], 1);
// 		i++;
// 	}
// }
