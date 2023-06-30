#include "push_swap.h"

int main (int argc, char **argv)
{
	t_list	*a;
	t_list	*b;
	int		*array;
	char	**new_argv;

	a = NULL;
	b = NULL;
	ft_memset (a, 0, sizeof (t_list));
	ft_memset (b, 0, sizeof (t_list));
	array = check_param(argc, argv);

	return (0);
}