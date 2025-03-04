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
		ft_printf("sa\n");
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
		ft_printf("sb\n");
	}
}

// ss
void	swap_ab(t_stack *stack)
{
	swap_a(stack);
	swap_b(stack);
	ft_printf("ss\n");;
}
