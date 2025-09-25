#include <stdio.h>
#include "libft.h"

int main(void)
{
    char buf[20] = "Hello";
    char *found;

    // strlcpy
    ft_strlcpy(buf, "World", sizeof(buf));
    printf("ft_strlcpy: %s\n", buf);

    // strlcat
    ft_strlcat(buf, "!!!", sizeof(buf));
    printf("ft_strlcat: %s\n", buf);

    // strchr
    found = ft_strchr(buf, '!');
    if (found) printf("ft_strchr found: %c\n", *found);

    // strrchr
    found = ft_strrchr(buf, '!');
    if (found) printf("ft_strrchr found last: %c\n", *found);

    // strncmp
    printf("ft_strncmp: %d\n", ft_strncmp("abc", "abd", 3));

    // strnstr
    found = ft_strnstr("Hello World", "World", 11);
    if (found) printf("ft_strnstr: %s\n", found);

    // strdup
    char *dup = ft_strdup("Copy me!");
    printf("ft_strdup: %s\n", dup);
    free(dup);

    return 0;
}
