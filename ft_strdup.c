char *strdup(const char *s)
{
	char *res;

	*res = *s;
	while (*s)
	{
		*res = *s;
		s++;
	}
	*res = '\0';
	return (res);
}