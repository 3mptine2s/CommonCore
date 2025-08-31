int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			c;
	size_t			i;

	c = 0;
	i = 0;
	while (s1[c] == s2[c] && s1[c] != '\0' && s2[c] != '\0' && i < n)
	{
		c++;
		i++;
	}
	if (i == n)
		return (0);
	return (s1[c] - s2[c]);
}