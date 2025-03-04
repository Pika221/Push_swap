#include "push_swap.h"

void check_is_num(const char *av)
{
	if(!av[0] || av[0] == ' ')
		free_exit(NULL, "Invalid argument!\n");
	else if (!ft_isdigit(*av) && *av != ' ' && !(*av >= 9 && *av <= 13) &&
			*av != 43 && *av != 45)
		free_exit(NULL, "Invalid argument!\n");
	else if (ft_isdigit(*av) && ((*av + 1) == 43 || (*av + 1) == 45))
		free_exit(NULL, "Invalid argument!\n");	
	else if ((*av == 43 || *av == 45) && ((*av + 1) == 43 || (*av + 1) == 45))
			free_exit(NULL, "Invalid argument!\n");
}

int check_arg(char **av)
{
	int i;
	int j;

	i = 1;
	j = 0;
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			check_is_num(&av[i][j]);
			j++;
		}
		i++;
	}
	return (0);
}

int sorted_stack(t_stack *stack_a)
{
	while (stack_a->next != NULL)
	{
		if (stack_a->num < stack_a->next->num)
			stack_a = stack_a->next;
		else
			return (0);
	}
	return (1);
}

void	double_or_sorted(t_stack *stack, int i)
{
	int	j;

	j = 0;
	if (i == 0)
	{
		while (i < stack->sizea)
		{
			j = i + 1;
			while (j < stack->sizea)
			{
				if(stack->a[i] == stack->a[j])
					free_exit(stack, "Same arguments!\n");
				j++;
			}
			i++;
		}
	}
	if (sorted_stack(stack))
		free_exit(stack, NULL);	
}
