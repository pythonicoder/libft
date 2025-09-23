#include <unistd.h>
#include <stdio.h>

int ft_isprint(int str)
{
    return (str >= 32 && str < 127);
}