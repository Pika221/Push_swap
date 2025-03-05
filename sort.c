/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <hialpagu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 02:55:13 by marvin            #+#    #+#             */
/*   Updated: 2025/03/05 02:55:13 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_two(t_stack **a)
{
	if ((*a)->num > (*a)->next->num)
		swap_a(*a);
}

void	sort_three(t_stack **a, int size)
{
	int	a;
	int	b;
	int	c;

	a = (*a)->num;
	b = (*a)->next->num;
	c = (*a)->next->next->num;
	if (b > c && c > a && b > a)
	{
		swap_a(*a);
		rotate_a(*a, size);
	}
	else if (c > a && a > b && c > b)
		swap_a(*a);
	else if (b > a && b > c)
		rrotate_a(a, size);
	else if (a > b && c > b)
		rotate_a(a, size);
	else if (a > b && b > c)
	{
		swap_a(*a);
		rrotate_a(a, size);
	}
}

void	sort_four_five(t_stack **a, t_stack **b, t_stack *size_a)
{
	while (size_a->num > 3)
		push_min(a, b, size_a);
	sort_three(a, ft_lstsize(*a));
	while (*b)
		push_a(a, b, size_a, size_a->next);
}

void	sort_list(t_stack **a, t_stack **b, t_stack *size_a)
{
	int	size;
	int	count;
	int	bit;
	int	max_bit;

	size = size_a->num;
	max_bit = 0;
	while ((size >> max_bit) > 0)
		max_bit++;
	bit = 0;
	while (bit < max_bit && !sorted_stack(*a))
	{
		count = 0;
		while (count < size)
		{
			if (((*a)->index >> bit) & 1)
				push_b(a, b, size_a, size_a->next);
			else
				rotate_a(a, size_a->num);
			count++;
		}
		while (*b)
			push_a(a, b, size_a, size_a->next);
		bit++;
	}
}
