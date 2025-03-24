#include "push_swap.h"

/*
** Checks if the given string represents a valid number.
*/
static int	is_valid_number(char *str)
{
    int	i;

    i = 0;
    if (str[i] == '-' || str[i] == '+')
        i++;
    while (str[i])
    {
        if (!ft_isdigit(str[i]))
            return (0);
        i++;
    }
    return (1);
}

/*
** Parses input arguments and creates a stack.
*/
t_stack	*parse_input(int argc, char **argv)
{
    t_stack	*stack;
    int		value;
    int		i;

    stack = NULL;
    i = 1;
    while (i < argc)
    {
        if (!is_valid_number(argv[i]) || ft_atol(argv[i]) > INT_MAX
            || ft_atol(argv[i]) < INT_MIN)
        {
            free_stack(stack);
            return (NULL);
        }
        value = ft_atoi(argv[i]);
        push_back(&stack, value);
        i++;
    }
    return (stack);
}
