#include "libft.h"

char *ft_strdup(const char *s1)
{
    size_t i;
    char *p;

    p = (char*)malloc(sizeof(*s1)*(ft_strlen(s1) + 1));
    if (!p)
        return(NULL);
    i = 0;
    while(s1[i])
    {
        p[i] = s1[i];
        i++;
    }
    p[i] = 0;
    return(p);
}