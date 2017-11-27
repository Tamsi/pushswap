/*
** EPITECH PROJECT, 2017
** my_delete_nodes
** File description:
** delete nodes from a linked list
*/

#include "my.h"

list_t	*my_delete_nodes(list_t *li)
{
	list_t *element;

	if ((element = malloc(sizeof(list_t *))) == NULL)
		return (NULL);
	element = li->next;
	li = NULL;
	return (element);
}
