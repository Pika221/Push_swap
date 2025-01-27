/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <hialpagu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 18:00:55 by marvin            #+#    #+#             */
/*   Updated: 2025/01/27 18:00:55 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
// sa
void	swap_a(t_stack *stack)
{
	int	tmp;

	if (stack->sizea > 1)
	{
		tmp = stack->a[0];
		stack->a[0] = stack->a[1];
		stack->a[1] = tmp;
		write (1, "sa\n", 3);
	}
}

// sb
void	swap_b(t_stack *stack)
{
	int	tmp;

	if (stack->sizeb > 1)
	{
		tmp = stack->b[0];
		stack->b[0] = stack->b[1];
		stack->b[1] = tmp;
		write (1, "sb\n", 3);
	}
}

// ss
void	swap_ab(t_stack *stack)
{
	swap_a(stack);
	swap_b(stack);
	write (1, "ss\n", 3);
}
