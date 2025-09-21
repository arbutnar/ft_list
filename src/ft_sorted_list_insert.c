#include "ft_list.h"

void    ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)(void *, void *)) {
    t_list  *prev, *current;

    if (cmp((*begin_list)->data, data) > 0) {
        ft_list_push_front(begin_list, data);
        return;
    }

    current = *begin_list;
    while (current) {
        if (cmp(current->data, data) > 0) {
            prev->next = ft_create_elem(data);
            prev->next->next = current;
            return;
        }
        prev = current;
        current = current->next;
    }
    ft_list_push_back(begin_list, data);
}

// int numcmp(void *num1, void *num2) {
//     return *(int *)num1 - *(int *)num2;
// }

// int main() {
//     int     i, *data_ptr;
//     t_list  *list;

//     list = NULL;
//     for (i = 0; i < 5; i++) {
//         data_ptr = malloc(sizeof(int));
//         *data_ptr = i * 2;
//         ft_list_push_front(&list, data_ptr);
//     }
//     ft_list_sort(&list, numcmp);
//     ft_print_list(list, print_as_int);
//     printf("\n");

//     data_ptr = malloc(sizeof(int));
//     *data_ptr = 10;
//     ft_sorted_list_insert(&list, data_ptr, numcmp);

//     ft_print_list(list, print_as_int);
// }
