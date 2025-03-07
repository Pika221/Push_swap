#include "push_swap.h"

void	free_exit(char **set_free) // yaptım
{
	int	i;

	i = 0;
	if (set_free)
	{
		while (set_free[i])
		{
			free(set_free[i]);
			i++;
		}
		free(set_free);
	}
	write(2, "Error\n", 6);
	exit(EXIT_FAILURE);
}

void	skip_whitespace(char ***av)
{
	while ((***av == 32) || (***av >= 9 && ***av <= 13))
		(**av)++;
}
size_t ft_strlen(const char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_atoi(const char *str)
{
	size_t	i;
	int		sign;
	int		num;

	i = 0;
	sign = 1;
	num = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] <= '9' && str[i] >= '0')
	{
		num *= 10;
		num += str[i] - '0';
		i++;
	}
	return (sign * num);
}
