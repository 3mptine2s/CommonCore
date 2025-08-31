#include <stdlib.h>
#include <stdio.h>

static int getlength(int n)
{
	int len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return len;
}

static void numiter(char *num, int n, int pos)
{
	num[pos] = '\0';
	pos--;
	while (pos >= 0)
	{
		num[pos] = n % 10 + '0';
		n /= 10;
		pos--;
	}
}

char *ft_itoa(int n)
{
	int len = getlength(n);
	char *num;

	if (n <= -2147483648)
	{
		num = "-2147483648";
		return (num);
	}
	if (n < 0)
	{
		num = malloc(len + 1);
		if (!num)
			return NULL;
		num[0] = '-';
		numiter(num + 1, -n, len - 1); // write digits after the minus
		num[len] = '\0';
	}
	else
	{
		num = malloc(len + 1);
		if (!num)
			return NULL;
		numiter(num, n, len);
		num[len] = '\0';
	}
	return num;
}

int main()
{
	char *num;

	num = ft_itoa(2147483647);
	printf("%s\n", num);
	free(num); // optional but good practice
	return 0;
}
