#include "push_swap.h"

/*
** Main function for the push_swap program.
** - Parses input arguments and initializes stack A.
** - Checks for duplicates and invalid input.
** - Sorts the stack if it is not already sorted.
** - Frees all allocated memory before exiting.
*/

int	main(int argc, char **argv)
{
    t_stack	*a;
    t_stack	*b;

    b = NULL;
    if (argc < 2)
        return (0);
    a = parse_input(argc, argv);
    if (!a || has_duplicates(a))
    {
        ft_putstr_fd("Error\n", 2);
        free_stack(a);
        return (1);
    }
    assign_indexes(a);
    if (!is_sorted(a))
        sort_stack(&a, &b);
    free_stack(a);
    return (0);
}
