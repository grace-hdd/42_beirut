#include <stdlib.h>

int ft_strlen(const char *s)
{
	int len = 0;
	while (s[len] != '\0')
		len++;
	return len;
}

char *ft_strdup(const char *s)
{
	char *str;
	size_t i;

	i = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1);
	if (!str)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

#include <stdio.h>
int main()
{
	const char *original = "Hello, world!";
	char *duplicate = ft_strdup(original);
	if (duplicate)
	{
		printf("Original: %s\n", original);
		printf("Duplicate: %s\n", duplicate);
		free(duplicate); // Don't forget to free the allocated memory
	}
	else
	{
		printf("Memory allocation failed\n");
	}
	return 0;
}