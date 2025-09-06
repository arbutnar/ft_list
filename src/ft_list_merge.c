#include "ft_list.h"

void ft_list_merge(t_list **begin_list1, t_list *begin_list2) {
    t_list  *last_list1;

    last_list1 = ft_list_last(*begin_list1);
    last_list1->next = begin_list2;
}

// int main() {
//     int     i, *data_ptr;
//     t_list  *list1, *list2;

//     list1 = NULL;
//     for (i = 0; i < 5; i++) {
//         data_ptr = malloc(sizeof(int));
//         *data_ptr = i;
//         ft_list_push_front(&list1, data_ptr);
//     }
//     ft_print_list(list1, print_as_int);
//     printf("\n");

//     list2 = NULL;
//     for (i = 5; i < 10; i++) {
//         data_ptr = malloc(sizeof(int));
//         *data_ptr = i;
//         ft_list_push_front(&list2, data_ptr);
//     }
//     ft_print_list(list2, print_as_int);
//     printf("\n");

//     ft_list_merge(&list1, list2);
//     ft_print_list(list1, print_as_int);
//     printf("\n");
// }
