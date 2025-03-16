/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hialpagu <hialpagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 21:11:34 by hialpagu          #+#    #+#             */
/*   Updated: 2025/03/08 21:11:34 by hialpagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(t_stack **stack, int message)
{
	t_stack	*first;
	t_stack	*second;

	if (!stack || !(*stack) || !(*stack)->next)
		return ;
	first = (*stack);
	second = (*stack)->next;
	first->next = second->next;
	second->next = first;
	*stack = second;
	if (message)
		ft_printf("sa\n");
}

void	swap_b(t_stack **stack, int message)
{
	t_stack	*tmp;
	t_stack	*tmp2;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	tmp = *stack;
	tmp2 = (*stack)->next;
	tmp->next = tmp2->next;
	tmp2->next = tmp;
	*stack = tmp2;
	if (message)
		ft_printf("sb\n");
}

void	swap_ab(t_stack **stack_a, t_stack **stack_b)
{
	swap_a(stack_a, 0);
	swap_b(stack_b, 0);
	ft_printf("ss\n");
}
