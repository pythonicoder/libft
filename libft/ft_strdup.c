#include "libft.h"

char    *ft_strdup(const char *s1)
{
    size_t len;

    len = ft_strlen(s1);
    
    char *copy = malloc(len +1);
    if (!copy)
        return (NULL);
    
    for (size_t i = 0; i < len; i++)
    {
        copy[i] = s1[i];
    }
    copy[len] = '\0';
    return (copy);
}