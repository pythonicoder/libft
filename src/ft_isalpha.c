#include <unistd.h>
#include <stdio.h>

int ft_isalpha(int  str)
{
    if (str >= 'a' && str <= 'z')
    {
        return (1);
    }
    else if (str >= 'A' && str <= 'Z')
    {
        return (1);
    }
    return (0);
}