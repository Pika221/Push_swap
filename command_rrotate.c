/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command_rrotate.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hialpagu <hialpagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 21:11:23 by hialpagu          #+#    #+#             */
/*   Updated: 2025/03/08 21:11:23 by hialpagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrotate_a(t_stack **stack, int message)
{
	t_stack	*tmp;
	t_stack	*end;
	int		i;

	i = 0;
	if (stack == NULL || *stack == NULL)
		return ;
	if (stack_size(*stack) < 2)
		return ;
	tmp = *stack;
	end = stack_last(*stack);
	while (i < stack_size(*stack) - 2)
	{
		tmp = tmp->next;
		i++;
	}
	tmp->next = NULL;
	stack_add_front(stack, end);
	if (message)
		ft_printf("rra\n");
}

void	rrotate_b(t_stack **stack, int message)
{
	t_stack	*tmp;
	t_stack	*end;
	int		i;

	i = 0;
	if (stack == NULL || *stack == NULL)
		return ;
	if (stack_size(*stack) < 2)
		return ;
	tmp = *stack;
	end = stack_last(*stack);
	while (i < stack_size(*stack) - 2)
	{
		tmp = tmp->next;
		i++;
	}
	tmp->next = NULL;
	stack_add_front(stack, end);
	if (message)
		ft_printf("rrb\n");
}

void	rrotate_ab(t_stack **stack_a, t_stack **stack_b)
{
	rrotate_a(stack_a, 0);
	rrotate_b(stack_b, 0);
	ft_printf("rrr\n");
}
