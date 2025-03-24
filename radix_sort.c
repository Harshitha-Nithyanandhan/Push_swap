#include "push_swap.h"

/*
** Returns the number of bits required to represent the largest index.
*/
int	get_max_bits(t_stack *stack)
{
    int	max;
    int	bits;

    max = stack_size(stack) - 1;
    bits = 0;
    while (max)
    {
        max >>= 1;
        bits++;
    }
    return (bits);
}

/*
** Sorts the stack using the radix sort algorithm.
*/
void	radix_sort(t_stack **a, t_stack **b)
{
    int	max_bits;
    int	size;
    int	i;
    int	j;

    size = stack_size(*a);
    max_bits = get_max_bits(*a);
    i = 0;
    while (i < max_bits)
    {
        j = 0;
        while (j++ < size)
        {
            if ((((*a)->index >> i) & 1) == 0)
                pb(a, b);
            else
                ra(a);
        }
        while (*b)
            pa(a, b);
        i++;
    }
}
