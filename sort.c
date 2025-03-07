#include "push_swap.h"

static int	find_max_bits(int size)
{
	int	max_bits;

	max_bits = 0;
	while (((size - 1) >> max_bits) != 0)
		max_bits++;
	return (max_bits);
}

void	sort_radix(t_stack **stack_a, t_stack **stack_b)
{
	int	i;
	int	j;
	int	size;
	int	max_bits;
	int	num;

	size = stack_size(*stack_a);
	max_bits = find_max_bits(size);
	i = 0;
	while (i < max_bits)
	{
		j = 0;
		while (j < size)
		{
			num = (*stack_a)->index;
			if (((num >> i) & 1) == 1)
				rotate_a(stack_a, 1);
			else
				push_b(stack_a, stack_b);
			j++;
		}
		while (*stack_b)
			push_a(stack_a, stack_b);
		i++;
	}
}
t_stack	*ps_parse(int ac, char **args)
{
	t_stack	*rtn;
	char	**values;
	int		i;
	int		arg;

	arg = 1;
	rtn = NULL;
	while (arg < ac)
	{
		i = 0;
		values = ft_split(args[arg], ' ');
		while (values[i])
		{
			stack_add_back(&rtn, stack_new(ft_atoi(values[i])));
			free(values[i]);
			i++;
		}
		free (values);
		arg++;
	}
	return (rtn);
}

