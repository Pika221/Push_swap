#include "push_swap.h"

void	rrotate_a(t_stack **stack)
{
	t_stack	*tmp;
	t_stack	*end;
	int		i;

	i = 0;
	if (stack == NULL || *stack == NULL)
		return ;
	if (stack_size(*stack) < 2)
		return ;
	tmp = *stack;
	end = stack_last(*stack);
	while (i < stack_size(*stack) - 2)
	{
		tmp = tmp->next;
		i++;
	}
	tmp->next = NULL;
	stack_add_front(stack, end);
	ft_printf("rra\n");
}

void	rrotate_b(t_stack **stack)
{
	t_stack	*tmp;
	t_stack	*end;
	int		i;

	i = 0;
	if (stack == NULL || *stack == NULL)
		return ;
	if (stack_size(*stack) < 2)
		return ;
	tmp = *stack;
	end = stack_last(*stack);
	while (i < stack_size(*stack) - 2)
	{
		tmp = tmp->next;
		i++;
	}
	tmp->next = NULL;
	stack_add_front(stack, end);
	ft_printf("rrb\n");
}

void	rrotate_ab(t_stack **stack_a, t_stack **stack_b)
{
	rrotate_a(stack_a);
	rrotate_b(stack_b);
	ft_printf("rrr\n");
}
