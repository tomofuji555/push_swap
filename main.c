#include "push_swap.h"

int main (int argc, char **argv)
{
	t_list	*head_a;
	t_list	*head_b;
	int		size;
	int		*array;
	// char	**new_argv;

	head_a = NULL;
	head_b = NULL;
	size = 0;
	ft_memset (head_a, 0, sizeof (t_list));
	ft_memset (head_b, 0, sizeof (t_list));
	array = check_param(argc, argv, &size);
	array = coord_comp (array, &size);
	// check_dup(argc, array, &size);
	return (0);
}