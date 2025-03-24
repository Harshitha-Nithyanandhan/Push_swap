#include "push_swap.h"

/*
** Rotates stack A: the first element becomes the last one.
*/
void	ra(t_stack **a)
{
    t_stack	*first;
    t_stack	*last;

    if (!(*a) || !((*a)->next))
        return;
    first = *a;
    last = *a;
    while (last->next)
        last = last->next;
    *a = first->next;
    first->next = NULL;
    last->next = first;
    ft_putstr_fd("ra\n", 1);
}

/*
** Rotates stack B: the first element becomes the last one.
*/
void	rb(t_stack **b)
{
    t_stack	*first;
    t_stack	*last;

    if (!(*b) || !((*b)->next))
        return;
    first = *b;
    last = *b;
    while (last->next)
        last = last->next;
    *b = first->next;
    first->next = NULL;
    last->next = first;
    ft_putstr_fd("rb\n", 1);
}

/*
** Rotates both stacks A and B simultaneously.
*/
void	rr(t_stack **a, t_stack **b)
{
    ra(a);
    rb(b);
    ft_putstr_fd("rr\n", 1);
}
