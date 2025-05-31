#include <stddef.h>

void *ft_memset(void *ptr, int value, unsigned int num)
{
    unsigned char *p;

    p = (unsigned char *)ptr;
    while (num--)
    {
        *p++ = (unsigned char)value;
    }
    return ptr;
}
