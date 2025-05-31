char	ft_strnstr(const char *str, const char *substr, unsigned int len)
{
    unsigned int	i;
    unsigned int	j;

    if (!*substr)
        return ((char *)str);
    for (i = 0; str[i] && i < len; i++)
    {
        if (str[i] == substr[0])
        {
            for (j = 0; substr[j] && str[i + j] && (i + j) < len; j++)
            {
                if (str[i + j] != substr[j])
                    break;
            }
            if (!substr[j])
                return ((char *)&str[i]);
        }
    }
    return (NULL);
}