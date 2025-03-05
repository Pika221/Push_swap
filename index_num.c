/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_num.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <hialpagu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 02:59:16 by marvin            #+#    #+#             */
/*   Updated: 2025/03/05 02:59:16 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	index_num(t_stack **a, int size)
{
	t_stack	*current_min;
	t_stack	*tmp;
	int		i;
	int		min_value;

	i = 0;
	while (i < size)
	{
		min_value = 2147483647;
		tmp = *a;
		while (tmp)
		{
			if (tmp->num < current_min && !tmp->assigned)
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

int	min_num(t_stack *a)
{
	int	min;

	min = a->num;
	while (a)
	{
		if (a->num < min)
			min = a->num;
		a = a->next;
	}
	return (min);
}

int	find_index(t_stack *stack, int value)
{
	int	i;

	i = 0;
	while (stack)
	{
		if (stack->num == value)
			return (i);
		stack = stack->next;
		i++;
	}
	return (-1);
}

void	push_min(t_stack **a, t_stack **b, t_stack *size_a)
{
	int	min;

	min = min_num(*a);
	while ((*a)->num != min)
	{
		if (find_index(*a, min) < size_a->num / 2)
			rotate_a(a, size_a->num);
		else
			rrotate_a(a, size_a->num);
	}
	push_b(a, b, size_a, size_a->next);
}
