#include <stdlib.h>
#include <string.h>
int ft_strlen(char const *s)
{
	int len = 0;
	while (s[len])
	{
		len++;
	}
	return (len);
}

static int in_set(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
		{
			return (1);
		}
		set++;
	}
	return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
	int start;
	int end;
	int len;
	char *trimmed;

	start = 0;
	end = ft_strlen(s1);
	if (!s1 || !set)
		return (NULL);
	while (s1[start] && in_set(s1[start], set))
		start++;
	while (end > start && in_set(s1[end - 1], set))
		end--;
	len = end - start;
	trimmed = (char *)malloc(sizeof(char) * (len + 1));
	if (!trimmed)
		return (NULL);
	memcpy(trimmed, s1 + start, len);
	trimmed[len] = '\0';
	return (trimmed);
}

#include <stdio.h>
int main(){
	char const *s1 = "   Hello, World!   ";
	char const *set = " ";
	char *result = ft_strtrim(s1, set);
	if (result)
	{
		printf("'%s'\n", result);
		free(result);
	}
	else
	{
		printf("Memory allocation failed.\n");
	}
	return 0;
}