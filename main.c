#include "push_swap.h"

int main (int argc, char **argv)
{
	t_list *a;
	t_list *b;
	char    **new_argv;

	a = NULL;
	b = NULL;
	ft_memset (a, 0, sizeof (t_list));
	ft_memset (b, 0, sizeof (t_list));
	new_argv = check_param(argc, argv, &a);

}