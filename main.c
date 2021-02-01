/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** lib
*/

#include "./include/double_chained_lists.h"

int main(int ac, char **av)
{
    list *global = create_global_list(ac, av);
    l_list *node = malloc(sizeof(l_list));

    if (global == NULL || node == NULL)
        return (84);
    for (int i = 1; i < ac; i++)
        node = add_to_list(&global, &node, atoi(av[i]));
    node = global->first;
    display(node);
    destroy_list(&global, &node);
    return (0);
}
