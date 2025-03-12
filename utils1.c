#include "push_swap.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	size_t	i;

	i = 0;
	str = malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (!str)
		return (NULL);
	while (i < ft_strlen(s1))
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	else if (ft_strlen(s) < start)
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	while (i < len && start < ft_strlen(s))
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

static int	total(char const *s, char c)
{
	int	a;

	a = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			a++;
		while (*s && *s != c)
			s++;
	}
	return (a);
}

static void	ft_free(char **arr, int i)
{
	while (i >= 0)
	{
		free(arr[i]);
		i--;
	}
	free(arr);
}

char	**ft_split(char const *s, char c)
{
	char	**final;
	int		i;
	int		j;
	int		len;

	len = total(s, c);
	final = malloc(sizeof(char *) * (len + 1));
	if (!final)
		return (NULL);
	i = -1;
	while (++i < len)
	{
		while (*s == c)
			s++;
		j = 0;
		while (s[j] != c && s[j])
			j++;
		final[i] = ft_substr(s, 0, j);
		if (!final[i])
			return (ft_free(final, i), NULL);
		s += j;
	}
	final[i] = NULL;
	return (final);
}
