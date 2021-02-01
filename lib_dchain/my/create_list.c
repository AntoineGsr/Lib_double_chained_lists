/*
** EPITECH PROJECT, 2020
** create_list.c
** File description:
** lib_antoine_gasser
*/

#include "double_chained_lists.h"

list *create_global_list(int ac, char **av)
{
    list *gbl = malloc(sizeof(list));

    if (gbl == NULL)
        return NULL;
    gbl->first = NULL;
    gbl->last = NULL;
    gbl->max_node = 0;
    return (gbl);
}