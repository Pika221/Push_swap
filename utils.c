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

/*static void	overflow_check(long digit, long result, long sign)
{
	if (sign == -1 && result > (2147483648 - digit) / 10)
		exit(EXIT_FAILURE);
	else if (sign == 1 && result > (2147483647 - digit) / 10)
		exit(EXIT_FAILURE);
}*/