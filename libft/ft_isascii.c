int	ft_isascii(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if ((unsigned char)str[c] > 127)
			return (0);
		c++;
	}
	return (1);
}
