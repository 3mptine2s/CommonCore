int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

// #include <stdio.h>
// int main()
// {
// 	int test_chars[] = { 'a', 'Z', '5', '!', ' ', '0', '9', 'A', 'z', '@' };
// 	int expected_results[] = { 0, 0, 1, 0, 0, 1, 1, 0, 0, 0 };
// 	int num_tests = sizeof(test_chars) / sizeof(test_chars[0]);
// 	int all_passed = 1;

// 	for (int i = 0; i < num_tests; i++)
// 	{
// 		int result = ft_isdigit(test_chars[i]);
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