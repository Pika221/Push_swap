/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command_rrotate.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <hialpagu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 03:03:46 by marvin            #+#    #+#             */
/*   Updated: 2025/03/05 03:03:46 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrotate_a(t_stack **a, int size)
{
	t_stack	*last;
	t_stack	*new_last;

	if (size < 2)
		return ;
	last = *a;
	new_last = *a;
	while (last -> next)
	{
		new_last = last;
		last = last -> next;
	}
	new_last -> next = NULL;
	last -> next = *a;
	*a = last;
	ft_printf("rra\n");
}

void	rrotate_b(t_stack **b, int size)
{
	t_stack	*last;
	t_stack	*new_last;

	if (size < 2)
		return ;
	last = *b;
	new_last = *b;
	while (last -> next)
	{
		new_last = last;
		last = last -> next;
	}
	new_last -> next = NULL;
	last -> next = *b;
	*b = last;
	ft_printf("rrb\n");
}

void	rrotate_ab(t_stack **a, t_stack **b, int asize, int bsize)
{
	rrotate_a(a, asize);
	rrotate_b(b, bsize);
	ft_printf("rrr\n");
}
