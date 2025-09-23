#include <unistd.h>
#include <stdio.h>

int ft_isdigit(int str)
{
    if(str >= '0' && str <= '9')
    {
        return (1);
    }
    return (0);
}