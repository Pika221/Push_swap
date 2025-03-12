#include "push_swap.h"

int	check_is_num(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

int	check_int(char *str)
{
	long	num;

	num = ft_atol(str);
	if (num > 2147483647 || num < -2147483648)
		return (0);
	return (1);
}

int	dup_check(t_stack *stack)
{
	t_stack	*tmp;

	while (stack->next)
	{
		tmp = stack->next;
		while (tmp)
		{
			if (tmp->value == stack->value)
				return (1);
			tmp = tmp->next;
		}
		stack = stack->next;
	}
	return (0);
}
void	free_stack(t_stack **stack)
{
	t_stack	*tmp;

	while (*stack)
	{
		tmp = *stack;
		*stack = (*stack)->next;
		free(tmp);
	}
}

int	sorted_check(t_stack *stack)
{
	while (stack->next)
	{
		if (stack->value > stack->next->value)
			return (0);
		stack = stack->next;
	}
	return (1);
}
