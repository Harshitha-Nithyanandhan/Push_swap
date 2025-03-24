#include "push_swap.h"

/*
** Reverse rotates stack A: the last element becomes the first one.
*/
void	rra(t_stack **a)
{
    t_stack	*prev;
    t_stack	*last;

    if (!(*a) || !((*a)->next))
        return;
    prev = NULL;
    last = *a;
    while (last->next)
    {
        prev = last;
        last = last->next;
    }
    if (prev)
        prev->next = NULL;
    last->next = *a;
    *a = last;
    ft_putstr_fd("rra\n", 1);
}

/*
** Reverse rotates stack B: the last element becomes the first one.
*/
void	rrb(t_stack **b)
{
    t_stack	*prev;
    t_stack	*last;

    if (!(*b) || !((*b)->next))
        return;
    prev = NULL;
    last = *b;
    while (last->next)
    {
        prev = last;
        last = last->next;
    }
    if (prev)
        prev->next = NULL;
    last->next = *b;
    *b = last;
    ft_putstr_fd("rrb\n", 1);
}

/*
** Reverse rotates both stacks A and B simultaneously.
*/
void	rrr(t_stack **a, t_stack **b)
{
    rra(a);
    rrb(b);
    ft_putstr_fd("rrr\n", 1);
}
