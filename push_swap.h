#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>

# ifndef INT_MAX
#  define INT_MAX 2147483647
# endif

# ifndef INT_MIN
#  define INT_MIN -2147483648
# endif

typedef struct s_stack
{
	int			value;
	int			index;
	struct s_stack	*next;
}	t_stack;

void	sa(t_stack **a);
void	sb(t_stack **b);
void	ss(t_stack **a, t_stack **b);
void	pa(t_stack **a, t_stack **b);
void	pb(t_stack **a, t_stack **b);
void	ra(t_stack **a);
void	rb(t_stack **b);
void	rr(t_stack **a, t_stack **b);
void	rra(t_stack **a);
void	rrb(t_stack **b);
void	rrr(t_stack **a, t_stack **b);
void	sort_stack(t_stack **a, t_stack **b);
void	sort_three(t_stack **a);
void	small_sort(t_stack **a, t_stack **b);
void	radix_sort(t_stack **a, t_stack **b);
int		get_max_bits(t_stack *stack);
int		stack_size(t_stack *stack);
void	free_stack(t_stack *stack);
void	ft_putstr_fd(char *s, int fd);
t_stack	*parse_input(int argc, char **argv);
void	push_back(t_stack **stack, int value);
void	assign_indexes(t_stack *stack);
int		has_duplicates(t_stack *stack);
int		is_sorted(t_stack *stack);
int		ft_isdigit(int c);
long	ft_atol(const char *str);
int		ft_atoi(const char *str);
int		get_min_index(t_stack *stack);
void	move_to_top(t_stack **a, int index);

#endif
