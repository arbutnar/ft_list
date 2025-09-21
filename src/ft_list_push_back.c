#include "ft_list.h"

void    ft_list_push_back(t_list **begin_list, void *data) {
    t_list  *last;

    last = ft_list_last(*begin_list);
    if (last == NULL) {
        *begin_list = ft_create_elem(data);
        return;
    }
    last->next = ft_create_elem(data);
}
