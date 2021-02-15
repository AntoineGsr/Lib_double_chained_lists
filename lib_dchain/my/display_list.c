/*
** EPITECH PROJECT, 2020
** display_l.c
** File description:
** lib_antoine_gasser
*/

#include "double_chained_lists.h"

void display(l_list *node)
{
    if (node == NULL) {
        printf("NULL\n");
        return;
    }
    while (node != NULL) {
        printf("%d", node->nb);
        printf(" -> ");
        node = node->next;
    }
    printf("NULL\n");
}
