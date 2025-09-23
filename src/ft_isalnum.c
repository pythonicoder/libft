#include <unistd.h>
#include <stdio.h>
#include "libft.h"

int ft_isalnum(int str)
{
    return (ft_isdigit(str) || ft_isalpha(str));
}