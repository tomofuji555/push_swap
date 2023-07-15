#include "push_swap.h"

// void print_list(t_list *ptr)
// {
//     ptr = ptr->next;
//     while(ptr != NULL)
//     {
//         printf("now: %p\n", ptr);
//         printf("content: %d\n", *(ptr->content));
//         printf("next: %p\n", ptr -> next);
//         puts("------------------------------");
//         ptr = ptr->next;
//     }
//     printf("--------end----------\n");
// }

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
	int i = 0;
	while (i < size)
	{
		printf ("%d\n", array[i]);
		i++;
	}
	printf("-----------------------------\n");
	t_list *current = head_a;
    while (current != NULL)
    {
        printf("%d\n", *(int *)(current->content));
        current = current->next;
    }
	printf("-----------------------------\n");
	// print_list(head_a);
	push_swap (&head_a, &head_b);
	current = head_a;
    while (current != NULL)
    {
        printf("%d\n", *(int *)(current->content));
        current = current->next;
    }
	return (0);
}