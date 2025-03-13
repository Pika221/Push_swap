#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "ft_printf/ft_printf.h"
# include <stdlib.h>
typedef struct s_stack
{
	int				value;
	int				index;
	struct s_stack	*next;
}					t_stack;

int	check_is_num(char *str);
int	check_int(char *str);
int	dup_check(t_stack *stack);
void	free_stack(t_stack **stack);
int	sorted_check(t_stack *stack);

void	push_a(t_stack **stack_a, t_stack **stack_b);
void	push_b(t_stack **stack_a, t_stack **stack_b);
void	rotate_a(t_stack **stack);
void	rotate_b(t_stack **stack);
void	rotate_ab(t_stack **stack_a, t_stack **stack_b);
void	rrotate_a(t_stack **stack);
void	rrotate_b(t_stack **stack);
void	rrotate_ab(t_stack **stack_a, t_stack **stack_b);;
void	swap_a(t_stack **stack);
void	swap_b(t_stack **stack);
void	swap_ab(t_stack **stack_a, t_stack **stack_b);

void	set_index(t_stack **stack);

t_stack	*stack_last(t_stack *stack);
void	stack_add_back(t_stack **stack, t_stack *new);
t_stack	*stack_new(int value);
t_stack	*parser(int ac, char **av);

void	free_n_exit(char **str);
void	check_args(char **av);
void	sort(t_stack **stack_a, t_stack **stack_b);

int	find_min(t_stack *stack);
int	find_index(t_stack *stack, int num);
int	stack_size(t_stack *stack);
void	sort_three(t_stack **stack_a);
void	small_stack(t_stack **stack_a, t_stack **stack_b, int size);

void	sort_stack(t_stack **stack_a, t_stack **stack_b);

long	ft_atol(const char *str);
size_t	ft_strlen(const char *str);
int	ft_atoi(const char *str);
int	ft_isdigit(int c);

char	**ft_split(char const *s, char c);

void	stack_add_front(t_stack **stack, t_stack *new);
t_stack	*stack_pop(t_stack **stack);

#endif