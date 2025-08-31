strcat(char * destination, char * source)
{
    while (*destination)
    {
        destination++;
    }
    while (*source)
    {
        *destination = *source;
        destination++;
        source++;
    }
    *destination = '\0';
    return (destination);
}
