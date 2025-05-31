#include "libft.h"

ft_memchr(const void *s, int c, size_t n)
{
    unsigned char *ptr;
    unsigned char ch;

    ptr = (unsigned char *)s;
    ch = (unsigned char)c;
    while (n-- && *ptr)
    {
        if (*ptr == ch)
            return (void *)ptr;
        ptr++;
    }
    return NULL;
}