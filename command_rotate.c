#include "push_swap.h"

void	rotate_a(t_stack **stack)
{
	t_stack	*tmp;
	t_stack	*tmp2;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	tmp = *stack;
	*stack = (*stack)->next;
	tmp2 = stack_last(*stack);
	tmp2->next = tmp;
	tmp->next = NULL;
	ft_printf("ra\n");
}

void	rotate_b(t_stack **stack)
{
	t_stack	*tmp;
	t_stack	*tmp2;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	tmp = *stack;
	*stack = (*stack)->next;
	tmp2 = stack_last(*stack);
	tmp2->next = tmp;
	tmp->next = NULL;
	ft_printf("rb\n");
}

void	rotate_ab(t_stack **stack_a, t_stack **stack_b)
{
	rotate_a(stack_a);
	rotate_b(stack_b);
	ft_printf("rr\n");
}
