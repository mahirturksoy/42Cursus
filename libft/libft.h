#ifndef libft
#define libft
#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>

int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
int ft_toupper(int c);
int ft_tolower(int c);
int ft_atoi(const char *str);
int ft_strncmp(const char *s1, const char *s2, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);


size_t ft_strlen(const char *s);
size_t ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize);
size_t ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize);


void *ft_memset(void *s, int c, size_t n);
void ft_bzero(void *s, size_t n);
void* ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
void *memmove(void *dst, const void *src, size_t len);
void* ft_memchr(const void *s, int c, size_t n);

char*  ft_strchr(const char *s, int c);
char* ft_strrchr(const char *s, int c);
char *ft_strnstr(const char *haystack, const char *needle, size_t len);



#endif