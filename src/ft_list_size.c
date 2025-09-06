#include "ft_list.h"

int    ft_list_size(t_list *begin_list) {
    int size;

    for (size = 0; begin_list; size++)
        begin_list = begin_list->next;
    return size;
}
