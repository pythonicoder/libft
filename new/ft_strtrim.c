#include <stdlib.h>
#include "libft.h"

static int in_set(char c, char const *set)
{
    while (*set)
    {
        if (*set == c)
            return (1);
        set++;
    }
    return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
    size_t start;
    size_t end;
    char *trimmed;

    if (!s1 || !set)
        return (NULL);
    start = 0;
    while (s1[start] && in_set(s1[start], set))
        start++;
    end = ft_strlen(s1);
    while (end > start && in_set(s1[end - 1], set))
        end--;
    trimmed = (char *)malloc(end - start + 1);
    if (!trimmed)
        return (NULL);
    ft_memcpy(trimmed, s1 + start, end - start);
    trimmed[end - start] = '\0';
    return (trimmed);
}