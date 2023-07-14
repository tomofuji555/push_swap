#include "push_swap.h"

int main(int argc, char **argv)
{
	t_list	*head_a;
	t_list	*head_b;
	int		size;
	int		*array;

	head_a = NULL;
	head_b = NULL;
	size = 0;
	array = check_param(argc, argv, &size);
	array = coord_comp (array, &size);
	make_stack (&head_a, array, &size);
	// int i = 0;
	// while (i < size)
	// {
	// 	printf ("%d\n", array[i]);
	// 	i++;
	// }
	t_list *current = head_a;
    while (current != NULL)
    {
        printf("%d\n", *(int *)(current->content));
        current = current->next;
    }
	return (0);
}