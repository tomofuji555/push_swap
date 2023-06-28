#include "push_swap.h"

static size_t	count_block(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] != c && s[i])
				i++;
		}
		else
			i++;
	}
	return (count);
}

static char	**free_all(char **str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		free (str[i]);
		str[i] = NULL;
		i++;
	}
	free (str);
	return (NULL);
}

static char	*mycopy(char *str, size_t number)
{
	char	*s;
	size_t	i;

	i = 0;
	s = (char *) malloc (sizeof(char) * (number + 1));
	if (!s)
		return (NULL);
	while (i < number)
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}

static char	**split_work(char const *s, char c, char **str, size_t block)
{
	size_t		i;
	size_t		num;
	char		*start;

	i = 0;
	while (i < block)
	{
		while (*s && *s == c)
			s++;
		start = (char *)s;
		num = 0;
		while (*s && *s != c)
		{
			s++;
			num++;
		}
		str[i] = mycopy(start, num);
		if (!str[i])
			return (free_all(str));
		i++;
	}
	str[i] = NULL;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	size_t	block;

	if (!s)
		return (NULL);
	block = count_block (s, c);
	str = (char **) malloc (sizeof (char *) * block + 1);
	if (!str)
		return (NULL);
	str = split_work (s, c, str, block);
	return (str);
}