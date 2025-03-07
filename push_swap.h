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
//commands
void	push_a(t_stack **stack_a, t_stack **stack_b);
void	push_b(t_stack **stack_a, t_stack **stack_b);
void	rotate_a(t_stack **stack, int message);
void	rotate_b(t_stack **stack, int message);
void	rotate_ab(t_stack **stack_a, t_stack **stack_b);
void	rrotate_a(t_stack **stack, int message);
void	rrotate_b(t_stack **stack, int message);
void	rrotate_ab(t_stack **stack_a, t_stack **stack_b);
void	swap_a(t_stack **stack, int messsage);
void	swap_b(t_stack **stack, int messsage);
void	swap_ab(t_stack **stack_a, t_stack **stack_b);
//checker
int	ft_isdigit(int c);
int	check_is_num(char *av);
long	ft_atol(const char *str);
int	is_int_range(char *str);
void	check_arg(int ac, char **av);
int	sorted_stack(t_stack *stack_a);

//utils
void	free_exit(char **set_free);
void	skip_whitespace(char ***av);
t_stack	*stack_new(int val);
t_stack	*stack_last(t_stack *stack);
void	stack_add_back(t_stack **stack, t_stack *new);
void	stack_add_front(t_stack **stack, t_stack *new);
int	stack_size(t_stack *stack);
t_stack	*stack_pop(t_stack **stack);
void	stack_free(t_stack **stack);
void	set_index(t_stack **stack);
int	get_index(t_stack *stack, int value);
//sort algorithms
int	find_min(t_stack *stack);
void	sort_three(t_stack **stack);
void	sort_four(t_stack **stack, t_stack **stack_b);
void	sort_five(t_stack **stack, t_stack **stack_b);
void	sort(t_stack **stack_a, t_stack **stack_b);
void	sort_radix(t_stack **stack_a, t_stack **stack_b);
t_stack *ps_parse(int ac, char **args);

size_t ft_strlen(const char *str);
int	ft_atoi(const char *str);
char	**ft_split(char const *s, char c);
int	dup_check(t_stack *stack_a);
char	**ft_split(char const *s, char c);

#endif
