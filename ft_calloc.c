#include <stdlib.h>
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len);

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	total_size;

	if (count == 0 || size == 0)
		return	(malloc(0));
	total_size = count * size;
	if (count != 0 && total_size / count != size)
		return (NULL);
	ptr = malloc(total_size);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, total_size);
	return (ptr);
}

// Helper to print buffer
// void print_buffer(const char *label, unsigned char *buf, size_t size)
// {
//     printf("%s: [", label);
//     for (size_t i = 0; i < size; i++)
//     {
//         if (buf[i] == 0)
//             printf("\\0");
//         else
//             printf("%02X", buf[i]);
//         if (i < size - 1) printf(" ");
//     }
//     printf("]\n");
// }

// int main(void)
// {
//     // 1. Allocate array of 5 ints
//     int *arr = (int *)ft_calloc(5, sizeof(int));
//     if (arr)
//     {
//         printf("Test1: ");
//         for (int i = 0; i < 5; i++)
//             printf("%d ", arr[i]);
//         printf("\n");
//         free(arr);
//     }

//     // 2. Allocate array of chars
//     char *chars = (char *)ft_calloc(6, sizeof(char));
//     if (chars)
//     {
//         print_buffer("Test2", (unsigned char *)chars, 6);
//         free(chars);
//     }

//     // 3. Allocate with count=0 or size=0 (should return valid pointer or NULL depending on malloc)
//     char *zero = (char *)ft_calloc(0, sizeof(char));
//     printf("Test3: %s\n", zero ? "Pointer not NULL (implementation-defined)" : "NULL");
//     free(zero);

//     // 4. Overflow check
//     void *overflow = ft_calloc(SIZE_MAX, 2);
//     printf("Test4 (overflow): %s\n", overflow == NULL ? "NULL (correct)" : "ERROR (should be NULL)");
//     free(overflow);

//     // 5. Large buffer check (but small enough for test)
//     char *big = (char *)ft_calloc(100, sizeof(char));
//     if (big)
//     {
//         int all_zero = 1;
//         for (int i = 0; i < 100; i++)
//             if (big[i] != 0) all_zero = 0;
//         printf("Test5: %s\n", all_zero ? "All zeros" : "ERROR: Not all zeros");
//         free(big);
//     }

//     return 0;
// }