#include <stdlib.h>
#include <string.h>

static int	ft_isset(char c, const char *set)
{
    while (*set)
    {
        if (c == *set)
            return (1);
        set++;
    }
    return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
    char	*trimmed;
    int		start;
    int		end;
    int		i;

    if (!s1 || !set)
        return (NULL);
    start = 0;
    while (s1[start] && ft_isset(s1[start], set))
        start++;
    end = strlen(s1) - 1;
    while (end >= start && ft_isset(s1[end], set))
        end--;
    trimmed = (char *)malloc(sizeof(char) * (end - start + 2));
    if (!trimmed)
        return (NULL);
    i = 0;
    while (start <= end)
        trimmed[i++] = s1[start++];
    trimmed[i] = '\0';
    return (trimmed);
}