/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <hialpagu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 02:59:56 by marvin            #+#    #+#             */
/*   Updated: 2025/03/05 02:59:56 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(t_stack *top)
{
	int	tmp;

	if (!top || !top -> next)
		return ;
	tmp = top->num;
	top -> num = top -> next -> num;
	top -> next -> num = tmp;
	ft_printf("sa\n");
}

void	swap_b(t_stack *top)
{
	int	tmp;

	if (!top || !top -> next)
		return ;
	tmp = top->num;
	top -> num = top -> next -> num;
	top -> next -> num = tmp;
	ft_printf("sb\n");
}

void	swap_ab(t_stack *a, t_stack *b)
{
	swap_a(a);
	swap_b(b);
	ft_printf("ss\n");
}
