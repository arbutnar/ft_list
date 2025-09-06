#include "ft_list.h"

t_list  *ft_list_push_strs(int size, char **strs) {
    t_list  *list = NULL;

    for (int i = 0; i < size; i++)
        ft_list_push_front(&list, strs[i]);
    return list;
}
