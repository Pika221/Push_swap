#include "push_swap.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	check_is_num(char *av)
{	int	i;

	i = 0;
	if (!av)
		return (0);
	if (av[0] == '-' || av[0] == '+')
		i++;
	if (!ft_isdigit(av[i]))
		return (0);
	while (av[i])
	{
		if (!ft_isdigit(av[i]))
			return (0);
		i++;
	}
	return (1);
}

long	ft_atol(const char *str)
{
	long	result;
	int		sign;

	result = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	sign = (*str == '-') ? -1 : 1;
	(*str == '-' || *str == '+') ? str++ : 0;
	while (*str >= '0' && *str <= '9')
		result = result * 10 + *str++ - 48;
	return (result * sign);
}

int	is_int_range(char *str)
{
	long	nbr;

	nbr = ft_atol(str);
	if (nbr > 2147483647 || nbr < -2147483648)
		return (0);
	return (1);
}
void	check_arg(int ac, char **av)
{
	int		i;
	int		j;
	char	**values;

	i = 1;
	if (ac < 2)
		free_exit(NULL);
	while (av[i])
	{
		j = 0;
		values = ft_split(av[i], ' ');
		if (!values || !values[j])
			free_exit(NULL);
		
		while (values[j])
		{
			if (!values[j] || !check_is_num(values[j]) 
				|| !is_int_range(values[j]) ||  ft_strlen(values[j]) > 11)
				free_exit(values);
			free(values[j]);
			j++;
		}
		free(values);
		i++;
	}
}
