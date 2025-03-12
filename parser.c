#include "push_swap.h"

t_stack	*stack_last(t_stack *stack)
{
	t_stack	*l_ptr;

	if (!stack)
		return (NULL);
	l_ptr = stack;
	while (l_ptr->next)
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

t_stack	*parser(int ac, char **av)
{
	t_stack	*stack;
	char	**val;
	int		i;
	int		j;

	stack = NULL;
	j = 1;
	while (j < ac)
	{
		i = 0;
		val = ft_split(av[j], ' ');
		if (!val || !val[i])
			free_n_exit(NULL);
		while (val[i])
		{
			stack_add_back(&stack, stack_new(ft_atoi(val[i])));
			free(val[i]);
			i++;
		}
		free(val);
		j++;
	}
	return (stack);
}
