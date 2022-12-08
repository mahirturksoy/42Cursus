#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
    size_t idx;

    idx = 0;
    while(idx < n)
    {
        ((unsigned char*)s)[idx] = c;
        idx++;
    }
    return s;
}