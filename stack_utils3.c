#include "push_swap.h"

/*
** Moves the element at the given index to the top of the stack.
*/
void	move_to_top(t_stack **a, int index)
{
    int	size;

    if (!a || !(*a))
        return;
    size = stack_size(*a);
    if (index < 0 || index >= size)
        return;
    if (index <= size / 2)
        while (index-- > 0)
            ra(a);
    else
        while (index++ < size)
            rra(a);
}

/*
** Frees all nodes in the stack.
*/
void	free_stack(t_stack *stack)
{
    t_stack	*temp;

    while (stack)
    {
        temp = stack;
        stack = stack->next;
        free(temp);
    }
}

/*
** Returns the size of the stack.
*/
int	stack_size(t_stack *stack)
{
    int	size;

    size = 0;
    while (stack)
    {
        size++;
        stack = stack->next;
    }
    return (size);
}

/*
** Returns the index of the smallest element in the stack.
*/
int	get_min_index(t_stack *stack)
{
    int		min_value;
    int		min_index;
    int		i;
    t_stack	*temp;

    if (!stack)
        return (-1);
    min_value = stack->value;
    min_index = 0;
    i = 0;
    temp = stack;
    while (temp)
    {
        if (temp->value < min_value)
        {
            min_value = temp->value;
            min_index = i;
        }
        temp = temp->next;
        i++;
    }
    return (min_index);
}