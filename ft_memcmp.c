#include "libft.h"

ft_memcmp(const void *ptr1, const void *ptr2, size_t n)
{
    const unsigned char *p1;
    const unsigned char *p2;

    p1 = (const unsigned char *)ptr1;
    p2 = (const unsigned char *)ptr2;
    while (n-- && *p1 && *p2)
    {
        if (*p1 != *p2)
            return (*p1 - *p2);
        p1++;
        p2++;
    }
    return 0;
}