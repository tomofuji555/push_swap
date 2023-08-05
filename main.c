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
	// int i = 0;
	// while (i < size)
	// {
	// 	printf ("%d\n", array[i]);
	// 	i++;
	// }
	// printf("-----------------------------\n");
	// printf("-----------------------------\n");
	// print_list(head_a);
	push_swap (&head_a, &head_b, &size);
	// t_list *current_a = head_a;
    // while (current_a != NULL)
    // {
    //     printf("a = %d\n", (current_a->num));
    //     current_a = current_a->next;
    // }
	// printf("-----------------------------\n");
	// t_list	*current_b = head_b;
	// while (current_b != NULL)
    // {
    //     printf("b = %d\n", (current_b->num));
    //     current_b = current_b->next;
    // }
	return (0);
}