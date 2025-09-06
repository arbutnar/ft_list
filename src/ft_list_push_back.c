#include "ft_list.h"

void    ft_list_push_back(t_list **begin_list, void *data) {
    t_list  *last;

    last = ft_list_last(*begin_list);
    last->next = ft_create_elem(data);
}
