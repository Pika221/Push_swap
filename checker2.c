#include "push_swap.h"

int	sorted_stack(t_stack *stack_a)
{
	while (stack_a->next != NULL)
	{
		if (stack_a->value < stack_a->next->value)
			stack_a = stack_a->next;
		else
			return (0);
	}
	return (1);
}

int	dup_check(t_stack *stack_a)
{
	t_stack	*temp;

	while (stack_a->next)
	{
		temp = stack_a->next;
		while (temp)
		{
			if (temp->value == stack_a->value)
			{
				return (1);
			}
			temp = temp->next;
		}
		stack_a = stack_a->next;
	}
	return (0);
}