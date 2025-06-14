#include <stdlib.h>

int ft_strlen(const char *s);
char *ft_strkoin(char const *s1, char const *s2)
{
	int i;
	int j;
	char *str;

	i = 0;
	j = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!str)
		return (NULL);
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		str[i + j] = s2[j];
		j++;
	}
	str[i + j] = '\0';
	return (str);
}

int ft_strlen(const char *s)
{
	int len = 0;
	while (s[len] != '\0')
		len++;
	return len;
}

#include <stdio.h>
int main()
{
	const char *str1 = "Hello, ";
	const char *str2 = "world!";
	char *result = ft_strkoin(str1, str2);
	if (result)
	{
		printf("Joined string: %s\n", result); // Should print "Hello, world!"
		free(result); // Don't forget to free the allocated memory
	}
	else
	{
		printf("Memory allocation failed\n");
	}
	return 0;
}