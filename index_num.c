#include "push_swap.h"

void	index_num(t_stack **a, int size)
{
	t_stack *current_min;
	t_stack *tmp;
	int i;
	int min_value;

	i = 0;
	while (i < size)
	{
		min_value = 2147483647;
		tmp = *a;
		while (tmp)
		{
			if(tmp->num < current_min && !tmp->assigned)
			{
				current_min = tmp;
				min_value = tmp->num;
			}
			tmp = tmp->next;
		}
		current_min->index = i;
		current_min->assigned = 1;
		i++;
	}
}
