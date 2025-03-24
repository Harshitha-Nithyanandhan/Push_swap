#include "push_swap.h"
#include <stdio.h>

/*
** Swaps the first two elements of stack A.
*/
void	sa(t_stack **a)
{
    t_stack	*first;
    t_stack	*second;

    if (!(*a) || !((*a)->next))
        return;
    first = *a;
    second = first->next;
    first->next = second->next;
    second->next = first;
    *a = second;
    ft_putstr_fd("sa\n", 1);
}

/*
** Swaps the first two elements of stack B.
*/
void	sb(t_stack **b)
{
    t_stack	*first;
    t_stack	*second;

    if (!(*b) || !((*b)->next))
        return;
    first = *b;
    second = first->next;
    first->next = second->next;
    second->next = first;
    *b = second;
    ft_putstr_fd("sb\n", 1);
}

/*
** Swaps the first two elements of both stacks A and B.
*/
void	ss(t_stack **a, t_stack **b)
{
    sa(a);
    sb(b);
    ft_putstr_fd("ss\n", 1);
}

/*
** Pushes the top element of stack B onto stack A.
*/
void	pa(t_stack **a, t_stack **b)
{
    t_stack	*temp;

    if (!(*b))
        return;
    temp = *b;
    *b = (*b)->next;
    temp->next = *a;
    *a = temp;
    ft_putstr_fd("pa\n", 1);
}

/*
** Pushes the top element of stack A onto stack B.
*/
void	pb(t_stack **a, t_stack **b)
{
    t_stack	*temp;

    if (!(*a))
        return;
    temp = *a;
    *a = (*a)->next;
    temp->next = *b;
    *b = temp;
    ft_putstr_fd("pb\n", 1);
}
