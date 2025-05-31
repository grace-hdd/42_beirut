#include <stdlib.h>

void *ft_calloc(unsigned int count, unsigned int size)
{
    unsigned int total_size = count * size;
    void *ptr;

    ptr = malloc(total_size);
    if (!ptr)
        return NULL;

    unsigned char *p = (unsigned char *)ptr;
    while (total_size--)
        *p++ = 0;

    return ptr;
}