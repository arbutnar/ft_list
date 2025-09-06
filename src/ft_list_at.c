#include "ft_list.h"

t_list  *ft_list_at(t_list *begin_list, unsigned int nbr) {
    for (size_t i = 0; begin_list; i++) {
        if (i == nbr)
            return begin_list;
        begin_list = begin_list->next;
    }
    return NULL;
}
