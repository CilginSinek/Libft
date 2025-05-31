#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t i;
    size_t j;
    if (*little == '\0')
        return (char *)big;
    if (len == 0)
        return NULL;
    while (*big && len > 0)
    {
        i = 0;
        j = 0;
        while (big[i] && little[j] && (i + j < len) && big[i + j] == little[j])
        {
            j++;
            if (little[j] == '\0')
                return (char *)(big + i);
        }
        i++;
        len--;
    }
    return NULL;
}