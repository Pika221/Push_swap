/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <hialpagu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 03:05:31 by marvin            #+#    #+#             */
/*   Updated: 2025/03/05 03:05:31 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_a(t_stack **a, int size)
{
	t_stack	*first;
	t_stack	*new_first;

	if (size < 2)
		return ;
	first = *a;
	new_first = (*a)-> next;
	while (first -> next)
		first = first -> next;
	first -> next = *a;
	(*a)-> next = NULL;
	*a = new_first;
	ft_printf("ra\n");
}

void	rotate_b(t_stack **b, int size)
{
	t_stack	*first;
	t_stack	*new_first;

	if (size < 2)
		return ;
	first = *b;
	new_first = (*b)-> next;
	while (first -> next)
		first = first -> next;
	first -> next = *b;
	(*b)-> next = NULL;
	*b = new_first;
	ft_printf("rb\n");
}

void	rotate_ab(t_stack **a, t_stack **b, int asize, int bsize)
{
	rotate_a(a, asize);
	rotate_b(b, bsize);
	ft_printf("rr\n");
}
