/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command_push.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <hialpagu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 03:08:05 by marvin            #+#    #+#             */
/*   Updated: 2025/03/05 03:08:05 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_a(t_stack **a, t_stack **b, t_stack *a_count, t_stack *b_count)
{
	t_stack	*tmp;

	if (b_count -> num <= 0)
		return ;
	tmp = *b;
	*b = (*b)-> next;
	ft_lstadd_front(a, tmp);
	b_count -> num--;
	a_count -> num++;
	ft_printf("pa\n");
}

void	push_b(t_stack **a, t_stack **b, t_stack *a_count, t_stack *b_count)
{
	t_stack	*tmp;

	if (a_count -> num <= 0)
		return ;
	tmp = *a;
	*a = (*a)-> next;
	ft_lstadd_front(b, tmp);
	(b_count -> num)++;
	(a_count -> num)--;
	ft_printf("pb\n");
}
