#include "push_swap.h"

/*
** Writes a string to the given file descriptor.
*/
void	ft_putstr_fd(char *s, int fd)
{
    while (*s)
        write(fd, s++, 1);
}

/*
** Checks if the stack is sorted in ascending order.
*/
int	is_sorted(t_stack *stack)
{
    while (stack && stack->next)
    {
        if (stack->value > stack->next->value)
            return (0);
        stack = stack->next;
    }
    return (1);
}

/*
** Checks if the stack contains duplicate values.
*/
int	has_duplicates(t_stack *stack)
{
    t_stack	*outer;
    t_stack	*inner;

    outer = stack;
    while (outer)
    {
        inner = outer->next;
        while (inner)
        {
            if (outer->value == inner->value)
                return (1);
            inner = inner->next;
        }
        outer = outer->next;
    }
    return (0);
}
