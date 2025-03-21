/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command_push.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hialpagu <hialpagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 21:10:18 by hialpagu          #+#    #+#             */
/*   Updated: 2025/03/08 21:10:18 by hialpagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_a(t_stack **stack_a, t_stack **stack_b)
{
	if (!stack_a || !*stack_b || !stack_b)
		return ;
	stack_add_front(stack_a, stack_pop(stack_b));
	ft_printf("pa\n");
}

void	push_b(t_stack **stack_a, t_stack **stack_b)
{
	if (!stack_a || !*stack_a || !stack_b)
		return ;
	stack_add_front(stack_b, stack_pop(stack_a));
	ft_printf("pb\n");
}
