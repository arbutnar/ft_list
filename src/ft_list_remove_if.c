#include "ft_list.h"

void    ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(), void (*free_fct)(void *)) {
    t_list  *prev, *current, *temp;

    while (cmp((*begin_list)->data, data_ref) == 0) {
        temp = *begin_list;
        *begin_list = (*begin_list)->next;
        free_fct(temp->data);
        free(temp);
    }
    prev = *begin_list;
    current = prev->next;
    while (current) {
        if (cmp(current->data, data_ref) == 0) {
            temp = current;
            free_fct(temp->data);
            free(temp);
            current = prev->next = current->next;
        } else {
            prev = current;
            current = current->next;
        }
    }
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
//         data_ptr = malloc(sizeof(int));
//         *data_ptr = 10;
//         ft_list_push_front(&list, data_ptr);
//     }
//     ft_print_list(list, print_as_int);
//     printf("\n");

//     int data_ref = 10;
//     ft_list_remove_if(&list, &data_ref, numcmp, free);
//     ft_print_list(list, print_as_int);
//     ft_list_clear(list, free);
// }
