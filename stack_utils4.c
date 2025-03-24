#include "push_swap.h"

/*
** Checks if the given character is a digit.
*/
int	ft_isdigit(int c)
{
    return (c >= '0' && c <= '9');
}

/*
** Converts a string to a long integer.
*/
long	ft_atol(const char *str)
{
    long	result;
    int		sign;
    int		i;

    result = 0;
    sign = 1;
    i = 0;
    while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign = -1;
        i++;
    }
    while (str[i] && ft_isdigit(str[i]))
    {
        result = (result * 10) + (str[i] - '0');
        i++;
    }
    return (result * sign);
}

/*
** Converts a string to an integer.
*/
int	ft_atoi(const char *str)
{
    return ((int)ft_atol(str));
}
