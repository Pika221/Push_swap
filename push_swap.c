#include "push_swap.h"



static t_stack *stack_a(char **av)
{
	t_stack *a;
	t_stack *tmp;

	a = malloc(sizeof(t_stack));
	if (!a)
		return (0);
	*a = (t_stack){};
	tmp = a;
	while (*(++av))
	{
		while (**av)
		{
			while ((**av >= 9 && **av <= 13) || **av == ' ')
				(*av)++;
			tmp -> num = ft_atoi(*(const char **)av);
			while (ft_isdigit(**av) || **av == '-' || **av == '+')
				(*av)++;
			skip_whitespace(&av);
			if (!**av && !*(av + 1))
				break ;
			ft_lstadd_back(&tmp, ft_lstnew(tmp->num));
			tmp = tmp -> next;
			}
		}
		return (a);
}

void	sort_stack(t_stack **a, t_stack **b, t_stack *stack_size)
{
	if (stack_size -> num == 2)
		sort_two(a);
	else if (stack_size -> num == 3)
		sort_three(a, stack_size -> num);
	else if (stack_size -> num <= 5)
		sort_four_five(a, stack_size);
	else
		sort_list(a, b, stack_size);
}

int main(int ac, char *av[])
{
	t_stack *a;
	t_stack *b;
	t_stack *stack_size;

	a = NULL;
	b = NULL;
	if(ac == 1)
	{
		ft_printf("Invalid argument count!\n");
		exit(EXIT_FAILURE);
	}
	check_arg(av); // bitti
	a = stack_a(av); //bitti ft_lstadd_back ft_lstnew
	stack_size = ft_lstsize(a);
	double_or_sorted_check(a, 0); // bitti
	index_num(&a, stack_size -> num);
	if(stack_size -> num == 1)
		return (0);
	sort_stack(&a, &b, stack_size); // bitti fonksiyonları yaz
	return (0);
}