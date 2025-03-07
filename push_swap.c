#include "push_swap.h"

void	sort(t_stack **stack_a, t_stack **stack_b)
{
	if (sorted_stack(*stack_a))
		;
	else if (stack_size(*stack_a) == 2)
	{
		if ((*stack_a)->value > (*stack_a)->next->value)
			swap_a(stack_a, 1);
	}
	else if (stack_size(*stack_a) == 3)
		sort_three(stack_a);
	else if (stack_size(*stack_a) == 4)
		sort_four(stack_a, stack_b);
	else if (stack_size(*stack_a) == 5)
		sort_five(stack_a, stack_b);
	else
		sort_radix(stack_a, stack_b);
}

int	main(int ac, char *args[])
{
	t_stack	*a;
	t_stack	*b;

	check_arg(ac, args);
	a = ps_parse(ac, args);
	if (dup_check(a) == 1)
	{
		stack_free(&a);
		free_exit(NULL);
	}
	b = NULL;
	set_index(&a);
	sort(&a, &b);
	stack_free(&a);
}
