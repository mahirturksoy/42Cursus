#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *str;

    if(!s)
        return(NULL);
    if(ft_strlen(s) < len)
        len = ft_strlen(s);
    if(ft_strlen(s) < start)
        return(ft_strdup(""));
    str = (char *)malloc(sizeof(char) * (len + 1));
    if(!str)
        return(0);
    ft_strlcpy(str, s + start, len + 1);
    return (str);
}