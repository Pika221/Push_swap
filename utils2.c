#include "push_swap.h"

void	stack_add_front(t_stack **stack, t_stack *new)
{
	new->next = *stack;
	*stack = new;
}

t_stack	*stack_pop(t_stack **stack)
{
	t_stack	*rtn;

	rtn = *stack;
	*stack = (*stack)->next;
	return (rtn);
}
