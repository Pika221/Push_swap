/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <hialpagu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 02:54:25 by marvin            #+#    #+#             */
/*   Updated: 2025/03/05 02:54:25 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_exit(t_stack *stack, char *message)
{
	if (message)
		write(2, message, ft_strlen(message));
	if (stack)
	{
		if (stack->a)
			free(stack->a);
		if (stack->b)
			free(stack->b);
		if (stack)
			free(stack);
	}
	ft_printf("Error\n");
	exit(1);
}

void	skip_whitespace(char ***av)
{
	while ((***av == 32) || (***v >= 9 && ***av <= 13))
		(**av)++;
}
