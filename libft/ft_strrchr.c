char *strrchr(const char *str, int c)
{
	const char	*last_occurrence;

	last_occurrence = NULL;
	while (*str)
	{
		if (*str == (char)c)
			last_occurrence = str;
		str++;
	}
	if (c == '\0')
		return ((char *)str);

	return ((char *)last_occurrence);
}
