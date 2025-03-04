/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <hialpagu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 18:02:05 by marvin            #+#    #+#             */
/*   Updated: 2025/01/27 18:02:05 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
// ra
void	rotate_a(t_stack *stack)
{
	int	i;
	int	tmp;

	if (stack->sizea > 1)
	{
		i = 0;
		tmp = stack->a[0];
		while (stack->sizea - 1 > i)
		{
			stack->a[i] = stack->a[i + 1];
			i++;
		}
		stack->a[i] = tmp;
		write (1, "ra\n", 3);
	}
}

// rb
void	rotate_b(t_stack *stack)
{
	int	i;
	int	tmp;

	if (stack->sizeb > 1)
	{
		i = 0;
		tmp = stack->b[0];
		while (stack->sizeb - 1 > i)
		{
			stack->b[i] = stack->b[i + 1];
			i++;
		}
		stack->b[i] = tmp;
		write (1, "rb\n", 3);
	}
}

// rr
void	rotate_ab(t_stack *stack)
{
	rotate_a();
	rotate_b();
	write (1, "rr\n", 3);
}
