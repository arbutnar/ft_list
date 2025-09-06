#include "ft_list.h"

t_list  *ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)()) {
    while (begin_list) {
        if (cmp(begin_list->data, data_ref) == 0)
            return begin_list;
        begin_list = begin_list->next;
    }
    return NULL;
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
//         *data_ptr = i;
//         ft_list_push_front(&list, data_ptr);
//     }
//     data_ptr = malloc(sizeof(int));
//     *data_ptr = 3;
//     ft_list_push_front(&list, data_ptr);

//     ft_print_list(list, print_as_int);
//     printf("\n");

//     int ref_data = 4;
//     t_list *elem = ft_list_find(list, &ref_data, numcmp);
//     printf("addr = %p, data = %d, next = %p\n", &(*elem), *(int *)elem->data, &(*(elem->next)));
// }
