#include "push_swap.h"
#include <stdbool.h>

// bool    empty_param(int argc, char **argv)
// {
//     size_t  i;
//     size_t  j;

//     i = 1;
//     while (argv[i])
//     {
//         j = 0;
//         while (argv[i][j] != '\0')
//         {
//             if (argv[i][j] == ' ')
//                 return (true);
//             j++;
//         }
//         i++;
//     }
//     return (false);
// }

int    not_num(int argc, char **argv)
{
	size_t	i;
	size_t	j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
            if (argv[i][0] == '-' || argv[i][0] == '+')
                j++;
			else if (argv[i][j] < '0' || argv[i][j] > '9')
				return (1);
			else
                j++;
		}
		i++;
	}
	return (0);
}

int check_dup(int *array, int *size)
{
	int	i;
	int	j;
	
	i = 0;
	while (i < *size - 1)
	{
		j = i + 1;
		while (j < *size)
		{
			if (array[i] == array[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

// int *ori_strcpy (int *dest, char *src)
// {
// 	int	i;
// 	i = 0;
// 	while (src[i])
// 		dest[i++] = (int)src[i++];
// 	dest[i] = '\0';
// 	return (dest);
// }

// int **put_to_array(int argc, char **argv)
// {
// 	int **new;
// 	int i = 1;
// 	int j = 0;
// 	int k = 0;
// 	if (argc <= 2)
// 		exit (1);
// 	if (argc > 2)
// 	{
// 		new = (int **)malloc(sizeof(int *) * argc);
// 		while (argv[i])
// 		{
// 			j = 0;
// 			while (argv[i][j])
// 				j++;
// 			new[k] = (int *)malloc(sizeof(int) *(j + 1));
// 			ori_strcpy(new[k], argv[i]);
// 			k++;
// 			i++;
// 		}
// 		new[k] = NULL;
// 	}
// 	return new;
// }