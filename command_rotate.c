/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hialpagu <hialpagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 21:10:28 by hialpagu          #+#    #+#             */
/*   Updated: 2025/03/08 21:10:28 by hialpagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_a(t_stack **stack, int message)
{
	t_stack	*tmp;
	t_stack	*tmp2;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	tmp = *stack;
	*stack = (*stack)->next;
	tmp2 = stack_last(*stack);
	tmp2->next = tmp;
	tmp->next = NULL;
	if(message)
		ft_printf("ra\n");
}

void	rotate_b(t_stack **stack, int message)
{
	t_stack	*tmp;
	t_stack	*tmp2;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	tmp = *stack;
	*stack = (*stack)->next;
	tmp2 = stack_last(*stack);
	tmp2->next = tmp;
	tmp->next = NULL;
	if (message)
		ft_printf("rb\n");
}

void	rotate_ab(t_stack **stack_a, t_stack **stack_b)
{
	rotate_a(stack_a, 0);
	rotate_b(stack_b, 0);
	ft_printf("rr\n");
}
