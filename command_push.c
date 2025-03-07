#include "push_swap.h"

void	push_a(t_stack **stack_a, t_stack **stack_b)
{
	if (!stack_a || !*stack_b || !stack_b)
		return ;
	stack_add_front(stack_a, stack_pop(stack_b));
	ft_printf("pa\n");
}

void	push_b(t_stack **stack_a, t_stack **stack_b)
{
	if (!stack_a || !*stack_a || !stack_b)
		return ;
	stack_add_front(stack_b, stack_pop(stack_a));
	ft_printf("pb\n");
}
