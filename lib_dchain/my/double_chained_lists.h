/*
** EPITECH PROJECT, 2020
** double_chained_lists.h
** File description:
** lib_antoine_gasser
*/

#ifndef DCHAIN_H_
#define DCHAIN_H_

#include <stdio.h>
#include <stdlib.h>

/*------------------SECONDARY_LIST------------------*/
typedef struct l_list l_list;
struct l_list
{
    int nb; //Choose the kind of variable you want for your project
    l_list *previous;
    l_list *next;
};

/*-------------------GLOBAL_LIST--------------------*/
typedef struct list list;
struct list
{
    int max_node;
    l_list *first;
    l_list *last;
};

/*-------------------CREATE_LIST--------------------*/
list *create_global_list(int ac, char **av);
/*-------------------ADD_TO_LIST--------------------*/
l_list *add_to_list(list **gbl, l_list **node, int nb);
l_list *add_first(list **gbl, l_list **node, int nb);
/*-------------------DEL_TO_LIST--------------------*/
void del_last_first(list **gbl, l_list **node);
void del_to_list(list **gbl, l_list **node, int pos);
/*-------------------DESTROY_LIST-------------------*/
void destroy_first_node(list **gbl, l_list **node);
void destroy_list(list **gbl, l_list **node);
/*-------------------DISPLAY_LIST-------------------*/
void display(l_list *node);

#endif /* DCHAIN_H_ */
