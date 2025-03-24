#include "push_swap.h"

/*
** Adds a new element with the given value to the end of the stack.
*/
void	push_back(t_stack **stack, int value)
{
    t_stack	*new;
    t_stack	*temp;

    new = malloc(sizeof(t_stack));
    if (!new)
        return;
    new->value = value;
    new->next = NULL;
    if (!*stack)
    {
        *stack = new;
        return;
    }
    temp = *stack;
    while (temp->next)
        temp = temp->next;
    temp->next = new;
}

/*
** Assigns an index to each element in the stack based on its value.
*/
void	assign_indexes(t_stack *stack)
{
    t_stack	*curr;
    t_stack	*comp;
    int		index;

    curr = stack;
    while (curr)
    {
        index = 0;
        comp = stack;
        while (comp)
        {
            if (comp->value < curr->value)
                index++;
            comp = comp->next;
        }
        curr->index = index;
        curr = curr->next;
    }
}
