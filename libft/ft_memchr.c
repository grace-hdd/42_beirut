void	*ft_memchr(const void *ptr, int value, unsigned int num)
{
    const unsigned char	*p;

    p = (const unsigned char *)ptr;
    while (num--)
    {
        if (*p == (unsigned char)value)
            return ((void *)p);
        p++;
    }
    return (NULL);
}