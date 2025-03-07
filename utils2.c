#include "push_swap.h"

t_stack	*stack_new(int value)
{
	t_stack	*new_stack;

	new_stack = malloc(sizeof(t_stack));
	if (!new_stack)
		return (NULL);
	new_stack->index = 0;
	new_stack->value = value;
	new_stack->next = NULL;
	return (new_stack);
}

t_stack	*stack_last(t_stack *stack)
{
	t_stack	*l_ptr;

	if (!stack)
		return (NULL);
	l_ptr = stack;
	while (l_ptr->next != NULL)
		l_ptr = l_ptr->next;
	return (l_ptr);
}

void	stack_add_back(t_stack **stack, t_stack *new)
{
	t_stack	*l_ptr;

	if (!stack || !(*stack))
	{
		*stack = new;
		return ;
	}
	l_ptr = stack_last(*stack);
	(l_ptr)->next = new;
}

void	stack_add_front(t_stack **stack, t_stack *new)
{
	new->next = *stack;
	*stack = new;
}

int	stack_size(t_stack *stack)
{
	int	size;

	size = 0;
	while (stack)
	{
		stack = stack->next;
		size++;
	}
	return (size);
}