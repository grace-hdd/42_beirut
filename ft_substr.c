#include <string.h>
#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *substr;
	unsigned int i;

	i = 0;
	substr = (char *)malloc(sizeof(char) * len + 1);
	if (!substr)
		return (NULL);
	while(i < len)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}


#include <stdio.h>
int main()
{
	const char *str = "Hello, world!";
	unsigned int start = 7;
	size_t len = 2;

	char *result = ft_substr(str, start, len);
	if (result)
	{
		printf("Substring: %s\n", result); // Should print "world"
		free(result); // Don't forget to free the allocated memory
	}
	else
	{
		printf("Memory allocation failed\n");
	}

	return 0;
}
