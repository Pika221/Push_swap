#include "push_swap.h"
// rra
void rrotate_a(t_stack *stack)
{
	int i;
	int tmp;

	if (stack->sizea > 1)
	{
		i = stack->sizea - 1;
		tmp = stack->a[stack->sizea - 1];
		while (i > 0)
		{
			stack->a[i] = stack->a[i - 1];
			i--;
		}
		stack->a[0] = tmp;
		write (1, "rra\n", 4);
	}
}
// rrb
void rrotate_b(t_stack *stack)
{
	int i;
	int tmp;

	if (stack->sizeb > 1)
	{
		i = stack->sizeb - 1;
		tmp = stack->b[stack->sizeb - 1];
		while (i > 0)
		{
			stack->b[i] = stack->b[i - 1];
			i--;
		}
		stack->b[0] = tmp;
		write (1, "rrb\n", 4);
	}
}
// rrr
void rrotate_ab(t_stack *stack)
{
	rrotate_a(stack);
	rrotate_b(stack);
	write (1, "rrr\n", 4);
}