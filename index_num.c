#include "push_swap.h"

void	set_index(t_stack **stack)
{
	t_stack	*tmp;
	t_stack	*tmp2;
	int		i;

	if (!stack || !(*stack))
		return ;
	tmp = *stack;
	while (tmp)
	{
		i = 0;
		tmp2 = *stack;
		while (tmp2)
		{
			if (tmp->value > tmp2->value)
				i++;
			tmp2 = tmp2->next;
		}
		tmp->index = i;
		tmp = tmp->next;
	}
}
