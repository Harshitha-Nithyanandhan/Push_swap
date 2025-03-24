#include "push_swap.h"
#include <stdio.h>

/*
** Sorts the stack using the appropriate sorting algorithm.
*/
void	sort_stack(t_stack **a, t_stack **b)
{
    int	size;

    size = stack_size(*a);
    if (size <= 3)
        sort_three(a);
    else if (size <= 5)
        small_sort(a, b);
    else
        radix_sort(a, b);
}

/*
** Sorts a stack of three elements.
*/
void	sort_three(t_stack **a)
{
    int	first;
    int	second;
    int	third;

    first = (*a)->value;
    second = (*a)->next->value;
    third = (*a)->next->next->value;
    if (first > second && second < third && first < third)
        sa(a);
    else if (first > second && second > third)
    {
        sa(a);
        rra(a);
    }
    else if (first > second && second < third && first > third)
        ra(a);
    else if (first < second && second > third && first < third)
    {
        sa(a);
        ra(a);
    }
    else if (first < second && second > third && first > third)
        rra(a);
}

/*
** Sorts a stack of up to five elements.
*/
void	small_sort(t_stack **a, t_stack **b)
{
    while (stack_size(*a) > 3)
    {
        move_to_top(a, get_min_index(*a));
        pb(a, b);
    }
    sort_three(a);
    while (*b)
        pa(a, b);
}
