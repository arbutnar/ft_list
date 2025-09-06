#include "ft_list.h"

void print_as_int(void *data) {
    if (data)
        printf("data = %d, ", *(int *)data);
    else
        printf("null_data");
}

void print_as_string(void *data) {
    if (data)
        printf("data = %s, ", (char *)data);
    else
        printf("null_data");
}

void    print_node(t_list *node, void (*print_fn)(void *)) {
    printf("addr = %p, ", &(*node));
    print_fn(node->data);
    printf("next = %-14p ->\n", &(*(node->next)));
}

void ft_print_list(t_list *head, void (*print_fn)(void *)) {
    if (!head) {
        printf("[empty]\n");
        return;
    }

    t_list *current = head;
    for (int i = 0; current; i++) {
        printf("[%d] addr = %p, ", i, &(*current));
        print_fn(current->data);
        printf("next = %p %s\n", &(*(current->next)), (current->next) ? "->" : "");
        current = current->next;
    }
}
