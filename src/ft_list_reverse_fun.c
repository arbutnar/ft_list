#include "ft_list.h"

void    ft_list_reverse_fun(t_list *begin_list) {
    t_list  *data_list, *current;

    data_list = NULL;
    current = begin_list;
    while (current) {
        ft_list_push_front(&data_list, current->data);
        current = current->next;
    }

    current = begin_list;
    while (current) {
        current->data = data_list->data;
        data_list = data_list->next;
        current = current->next;
    }
}

// int main() {
//     int     i, *data_ptr;
//     t_list  *list;

//     list = NULL;
//     for (i = 10; i > 0; i--) {
//         data_ptr = malloc(sizeof(int));
//         *data_ptr = i;
//         ft_list_push_front(&list, data_ptr);
//     }
//     ft_print_list(list, print_as_int);
//     printf("\n");

//     ft_list_reverse_fun(list);
//     ft_print_list(list, print_as_int);
// }