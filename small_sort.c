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

int	find_index(t_stack *stack, int num)
{
	int	index;

	index = 0;
	while (stack)
	{
		if (stack->value == num)
			return (index);
		stack = stack->next;
		index++;
	}
	return (-1);
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

void	sort_three(t_stack **stack_a)
{
	int	a;
	int	b;
	int	c;

	a = (*stack_a)->value;
	b = (*stack_a)->next->value;
	c = (*stack_a)->next->next->value;
	if (b > c && c > a && b > a)
	{
		swap_a(stack_a);
		rotate_a(stack_a);
	}
	else if (c > a && a > b && c > b)
		swap_a(stack_a);
	else if (b > a && b > c)
		rrotate_a(stack_a);
	else if (a > b && c > b)
		rotate_a(stack_a);
	else if (a > b && b > c)
	{
		swap_a(stack_a);
		rrotate_a(stack_a);
	}
}

void	small_stack(t_stack **stack_a, t_stack **stack_b, int size)
{
	int	min;

	if (size <= 3)
	{
		sort_three(stack_a);
		return ;
	}
	while (size > 3)
	{
		min = find_min(*stack_a);
		while ((*stack_a)->value != min)
		{
			if (find_index(*stack_a, min) <= size / 2)
				rotate_a(stack_a);
			else
				rrotate_a(stack_a);
		}
		push_b(stack_a, stack_b);
		size--;
	}
	sort_three(stack_a);
	while (*stack_b)
		push_a(stack_a, stack_b);
}
