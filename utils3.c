#include "push_swap.h"

t_stack	*stack_pop(t_stack **stack)
{
	t_stack	*rtn;

	rtn = *stack;
	*stack = (*stack)->next;
	return (rtn);
}

void	stack_free(t_stack **stack)
{
	t_stack	*temp;

	while (*stack)
	{
		temp = *stack;
		*stack = (*stack)->next;
		free(temp);
	}
}

void	set_index(t_stack **stack)
{
	t_stack	*current;
	t_stack	*other;
	int		index;

	if (!stack || !(*stack))
		return ;
	current = *stack;
	while (current)
	{
		index = 0;
		other = *stack;
		while (other)
		{
			if (other->value < current->value)
				index++;
			other = other->next;
		}
		current->index = index;
		current = current->next;
	}
}

int	get_index(t_stack *stack, int value)
{
	int	index;

	index = 0;
	while (stack)
	{
		if (stack->value == value)
			return (index);
		index++;
		stack = stack->next;
	}
	return (-1);
}
