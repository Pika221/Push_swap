/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <hialpagu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 18:04:57 by marvin            #+#    #+#             */
/*   Updated: 2025/01/27 18:04:57 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
// pa
void	push_a(t_stack *stack)
{
	int	i;

	if (stack->sizeb > 0)
	{
		i = stack->sizea;
		while (i > 0)
		{
			stack->a[i] = stack->a[i - 1];
			i--;
		}
		stack->a[0] = stack->b[0];
		i = 0;
		while (stack->sizeb - 1 > i)
		{
			stack->b[i] = stack->b[i + 1];
			i++;
		}
		stack->sizea++;
		stack->sizeb--;
		write (1, "pa\n", 3);
	}
}

// pb
void	push_b(t_stack *stack)
{
	int	i;

	if (stack->sizea > 0)
	{
		i = stack->sizeb;
		while (i > 0)
		{
			stack->b[i] = stack->b[i - 1];
			i--;
		}
		stack->b[0] = stack->a[0];
		i = 0;
		while (stack->sizea - 1 > i)
		{
			stack->a[i] = stack->a[i + 1];
			i++;
		}
		stack->sizeb++;
		stack->sizea--;
		write (1, "pb\n", 3);
	}
}
