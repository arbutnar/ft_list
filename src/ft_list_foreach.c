#include "ft_list.h"

void    ft_list_foreach(t_list *begin_list, void (*f)(void *)) {
    while (begin_list) {
        f(begin_list->data);
        begin_list = begin_list->next;
    };
}

// void    add_ten(void *data) {
//     *(int *)data += 10;
// }

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

//     ft_list_foreach(list, add_ten);
//     ft_print_list(list, print_as_int);
// }