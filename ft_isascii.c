int ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	return (0);
}

// #include <stdio.h>
// int main()
// {
// 	int test_chars[] = { 'a', 'Z', '5', '!', ' ', '0', '9', 'A', 'z', '@', 128, -1 };
// 	int expected_results[] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0 };
// 	int num_tests = sizeof(test_chars) / sizeof(test_chars[0]);
// 	int all_passed = 1;

// 	for (int i = 0; i < num_tests; i++)
// 	{
// 		int result = ft_isascii(test_chars[i]);
// 		if (result != expected_results[i])
// 		{
// 			printf("Test failed for input '%c' (ASCII %d): expected %d, got %d\n",
// 				   test_chars[i], test_chars[i], expected_results[i], result);
// 			all_passed = 0;
// 		}
// 	}

// 	if (all_passed)
// 		printf("All tests passed!\n");

// 	return 0;
// }
