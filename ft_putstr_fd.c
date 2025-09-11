#include <unistd.h>

void	ft_putstr_fd(char const *s, int fd)
{
	int i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}

// int main()
// {
// 	ft_putstr_fd("Hello, World!", 1); // Should print to stdout
// 	ft_putstr_fd("Hello, File!", 2);  // Should print to stderr
// 	return 0;
// }