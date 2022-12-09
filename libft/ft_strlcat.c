#include "libft.h"

size_t ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
    int i;
    int j;
    size_t length;

    length = ft_strlen(dst);
    if(dstsize > 0 && dstsize > length)
    {
        i = length;
        j = 0;
        while(src[j] && i < (int)dstsize - 1)
        {
            dst[i] = src[j];
            i++;
            j++;
        }
        dst[i] = '\0';
        return (length + ft_strlen(src));
    }
    return (dstsize + ft_strlen(src));
}