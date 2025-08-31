static char f(unsigned int i,char c)
{
    c = (malloc(sizeof(char)));
    return (malloc(sizeof(char)));
}

char * ft_strmapi(char const *s, char(*f)(unsigned int, char))
{
    int i;

    i = 0;
    while (s[i])
    {
        f(i,s);
        i++;
    }
    return (s);
}