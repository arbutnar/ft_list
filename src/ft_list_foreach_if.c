#include "ft_list.h"

void    ft_list_foreach_if(t_list *begin_list, void (*f)(void *), void *data_ref, int (*cmp)()) {
    while (begin_list) {
        if (cmp(begin_list->data, data_ref) == 0)
            f(begin_list->data);
        begin_list = begin_list->next;
    }
}

// void    add_ten(void *data) {
//     *(int *)data += 10;
// }

// int numcmp(void *num1, void *num2) {
//     return *(int *)num1 - *(int *)num2;
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

//     int ref_data = 0;
//     ft_list_foreach_if(list, add_ten, &ref_data, numcmp);
//     ft_print_list(list, print_as_int);
// }