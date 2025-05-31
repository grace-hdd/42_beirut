#include <stdlib.h>

static int	ft_numlen(int n)
{
    int	len;

    len = (n <= 0) ? 1 : 0;
    while (n != 0)
    {
        n /= 10;
        len++;
    }
    return (len);
}

char	*ft_itoa(int n)
{
    char	*str;
    int		len;
    long	num;

    num = n;
    len = ft_numlen(n);
    str = (char *)malloc(sizeof(char) * (len + 1));
    if (!str)
        return (NULL);
    str[len] = '\0';
    if (num < 0)
    {
        str[0] = '-';
        num = -num;
    }
    while (len-- > (n < 0 ? 1 : 0))
    {
        str[len] = (num % 10) + '0';
        num /= 10;
    }
    return (str);
}