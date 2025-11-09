#include <stdio.h>
#include <stdarg.h>


void argtest(int count, ...)
{
    va_list hello;
    va_start(hello,count);
    printf("%d",va_arg(hello,int));
    
}

int main()
{
    argtest(1,2,3,4,5,6);
}