/*
** EPITECH PROJECT, 2020
** add_to_list.c
** File description:
** lib_antoine_gasser
*/

#include "double_chained_lists.h"

l_list *add_to_list(list **gbl, l_list **node, int nb)
{
    l_list *new = malloc(sizeof(l_list));

    if (new == NULL)
        return NULL;
    if ((*gbl)->first == NULL) {
        (*gbl)->first = new;
        (*gbl)->last = new;
        new->previous = NULL;
    } else {
        new->previous = *node;
        (*node)->next = new;
        (*gbl)->last = new;
    }
    new->next = NULL;
    new->nb = nb;
    (*gbl)->max_node += 1;
    return (new);
}
