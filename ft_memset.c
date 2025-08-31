#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void *memset(void *str, int c, size_t n)
{
	unsigned char *p;

	p = str;
	while (n-- && *p)
	{
		*p = (unsigned char)c;
		p++;
	}
	return str;
}

// int main () 
// {
//    char str[50];

//    strcpy(str, "Welcome to Tutorialspoint");
//    puts(str);

//    memset(str, '#', 7);
//    puts(str);
   
//    return(0);
// }
