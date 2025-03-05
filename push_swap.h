/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <hialpagu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 18:03:37 by marvin            #+#    #+#             */
/*   Updated: 2025/01/27 18:03:37 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include "ft_printf/ft_printf.h"
# include <stdlib.h>

void	push_a(t_stack **a, t_stack **b, int *size_a, int *size_b);
void	push_b(t_stack **a, t_stack **b, int *size_a, int *size_b);
void	rotate_a(t_stack **a, int size);
void	rotate_b(t_stack **b, int size);
void	rotate_ab(t_stack **a, t_stack **b, int size_a, int size_b);
void	rrotate_a(t_stack **a, int size);
void	rrotate_b(t_stack **b, int size);
void	rrotate_ab(t_stack **a, t_stack **b, int size_a, int size_b);
void	swap_a(t_stack **a, int size);
void	swap_b(t_stack **b, int size);
void	swap_ab(t_stack **a, t_stack **b, int size_a, int size_b);
void	check_is_num(const char *av);
int		check_arg(char **av);
int		sorted_stack(t_stack *stack_a);
void	double_or_sorted(t_stack *stack, int i);
void	free_exit(t_stack *stack, char *message);
void	skip_whitespace(char ***av);
void	index_num(t_stack **a, int size);
int		min_num(t_stack *a);
int		find_index(t_stack *stack, int value);
void	push_min(t_stack **a, t_stack **b, t_stack *size_a);
void	sort_two(t_stack **a);
void	sort_three(t_stack **a, int size);
void	sort_four_five(t_stack **a, t_stack **b, t_stack *size_a);
void	sort_list(t_stack **a, t_stack **b, t_stack *size_a);
void	sort_stack(t_stack **a, t_stack **b, t_stack *stack_size);
#endif