#include "libft.h"

void *memmove(void *dst, const void *src, size_t len)
{
    size_t index;

    if(dst == src || !len)
        return (dst);
    index = 0;
    if(dst < src)
    {
        while(index < len)
        {
            *((char*)dst + index) = *((char*)src + index);
            index++;
        }
    }
    else
    {
        while(len > 0)
        {
            *((char *)dst + len - 1) = *((char*)src + len - 1);
            len--;
        }
    }
    return (dst);
}