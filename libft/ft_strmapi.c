#include "libft.h"

 char *ft_strmapi(char const *s, char(*f)(unsigned int, char))
 {
    char *str;
    size_t s_strlen;
    size_t i;

    if(!s)
        return(0);
    i = 0;
    s_strlen = ft_strlen(s);
    str = malloc(sizeof(char) * (s_strlen + 1));
    if(!str)
        return(NULL);
    while(*s)
    {
        str[i] = f(i,(char)*s);
        s++;
        i++;
    }
    str[i] = '\0';
    return (str);
 }