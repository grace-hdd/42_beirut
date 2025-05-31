char *strchr(const char *str, int c)
{
    while (*str)
    {
        if (*str == (char)c)
            return (char *)str;
        str++;
    }
    if (c == '\0')
        return (char *)str;
    return NULL;
}