#include "ft_list.h"

void    ft_list_reverse(t_list **begin_list) {
    t_list  *new_list, *temp;

    new_list = NULL;
    while (*begin_list) {
        ft_list_push_front(&new_list, (*begin_list)->data);
        temp = (*begin_list)->next;
        free(*begin_list);
        *begin_list = temp;
    }
    *begin_list = new_list;
}

// int main() {
//     int     i, *data_ptr;
//     t_list  *list;

//     list = NULL;
//     for (i = 0; i < 5; i++) {
//         data_ptr = malloc(sizeof(int));
//         *data_ptr = i;
//         ft_list_push_front(&list, data_ptr);
//     }
//     ft_print_list(list, print_as_int);
//     printf("\n");

//     ft_list_reverse(&list);
//     ft_print_list(list, print_as_int);
//     ft_list_clear(list, free);
// }
