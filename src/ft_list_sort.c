#include "ft_list.h"

t_list  *find_half_list(t_list *begin) {
    t_list  *slow_ptr, *fast_ptr, *half;

    slow_ptr = fast_ptr = begin;
    while (fast_ptr != NULL && fast_ptr->next != NULL && fast_ptr->next->next) {
        fast_ptr = fast_ptr->next->next;
        slow_ptr = slow_ptr->next;
    }
    half = slow_ptr->next;
    slow_ptr->next = NULL;
    return half;
}

t_list  *merge_sort(t_list *node1, t_list *node2, int (*cmp)()) {
    t_list  *node3;

    if (node1 == NULL)
        return node2;
    if (node2 == NULL)
        return node1;

    if (cmp(node1->data, node2->data) > 0) {
        node3 = node2;
        node3->next = merge_sort(node1, node2->next, cmp);
    } else {
        node3 = node1;
        node3->next = merge_sort(node1->next, node2, cmp);
    }
    return node3;
}

void    ft_list_sort(t_list **begin_list, int (*cmp)()) {
    t_list  *half_list;

    if (*begin_list == NULL || (*begin_list)->next == NULL)
        return;
    half_list = find_half_list(*begin_list);
    ft_list_sort(begin_list, cmp);
    ft_list_sort(&half_list, cmp);

    *begin_list = merge_sort(*begin_list, half_list, cmp);
}

// int numcmp(void *num1, void *num2) {
//     return *(int *)num1 - *(int *)num2;
// }

// int main() {
//     int     *data_ptr;
//     t_list  *list;
//     int     datas[] = {3,9,6,5,1,7};

//     list = NULL;
//     for (int i = 0; i < 100; i++) {
//         data_ptr = malloc(sizeof(int));
//         *data_ptr = i;
//         ft_list_push_front(&list, data_ptr);
//     }
//     ft_print_list(list, print_as_int);
//     printf("\n");

//     ft_list_sort(&list, numcmp);
//     printf("\n");
//     ft_print_list(list, print_as_int);
// }
