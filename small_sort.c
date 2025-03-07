#include "push_swap.h"

int	find_min(t_stack *stack)
{
	int	min;

	if (!stack)
		return (0);
	min = stack->value;
	while (stack)
	{
		if (stack->value < min)
			min = stack->value;
		stack = stack->next;
	}
	return (min);
}

void	sort_three(t_stack **stack)
{
	int	a;
	int	b;
	int	c;

	a = (*stack)->value;
	b = (*stack)->next->value;
	c = (*stack)->next->next->value;
	if (a > b && b < c && a < c)
		swap_a(stack, 1);
	else if (a > b && b > c)
	{
		swap_a(stack, 1);
		rrotate_a(stack, 1);
	}
	else if (a > b && b < c && a > c)
		rotate_a(stack, 1);
	else if (a < b && b > c && a < c)
	{
		swap_a(stack, 1);
		rotate_a(stack, 1);
	}
	else if (a < b && b > c && a > c)
		rrotate_a(stack, 1);
}

void	sort_four(t_stack **stack, t_stack **stack_b)
{
	int	min;
	int	i;

	min = find_min(*stack);
	i = 0;
	while ((*stack)->value != min)
	{
		rrotate_a(stack, 1);
		i++;
	}
	push_b(stack, stack_b);
	sort_three(stack);
	push_a(stack, stack_b);
}

void	sort_five(t_stack **stack, t_stack **stack_b)
{
	int	min;
	int	index;
	int	size;
	int	i;

	i = 0;
	while (i < 2)
	{
		size = stack_size(*stack);
		min = find_min(*stack);
		index = get_index(*stack, min);
		if (index <= size / 2)
			while ((*stack)->value != min)
				rotate_a(stack, 1);
		else
			while ((*stack)->value != min)
				rrotate_a(stack, 1);
		push_b(stack, stack_b);
		i++;
	}
	sort_three(stack);
	push_a(stack, stack_b);
	push_a(stack, stack_b);
}
