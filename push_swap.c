#include "push_swap.h"

void	free_n_exit(char **str)
{
	int	i;

	i = 0;
	if (str)
	{
		while (str[i])
		{
			free(str[i]);
			i++;
		}
		free(str);
	}
	ft_printf("Error\n");
	exit(1);
}

void	check_args(char **av)
{
	int		i;
	int		j;
	char	**val;

	j = 1;
	while (av[j])
	{
		i = 0;
		val = ft_split(av[j], ' ');
		if (!val || !val[i])
			free_n_exit(NULL);
		while (val[i])
		{
			if (!val[i] || !check_is_num(val[i]) || !check_int(val[i])
				|| ft_strlen(val[i]) > 11)
				free_n_exit(val);
			free(val[i]);
			i++;
		}
		free(val);
		j++;
	}
}

void	sort(t_stack **stack_a, t_stack **stack_b)
{
	if (stack_size(*stack_a) == 2)
	{
		if ((*stack_a)->value > (*stack_a)->next->value)
			swap_a(stack_a, 1);
	}
	else if (stack_size(*stack_a) < 6)
		small_stack(stack_a, stack_b, stack_size(*stack_a));
	else
		sort_stack(stack_a, stack_b);
}

int	main(int ac, char **av)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	if (ac < 2 || !av[1][0])
		return (0);
	check_args(av);
	stack_a = parser(ac, av);
	if (dup_check(stack_a))
	{
		free_stack(&stack_a);
		free_n_exit(NULL);
	}
	stack_b = NULL;
	set_index(&stack_a);
	if (sorted_check(stack_a))
	{
		free_stack(&stack_a);
		return (0);
	}
	sort(&stack_a, &stack_b);
	free_stack(&stack_a);
}
