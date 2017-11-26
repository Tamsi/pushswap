/*
** EPITECH PROJECT, 2017
** push_in_list
** File description:
** push element in list
*/

#include "my.h"

list_t	*push_in_list(list_t *list, int nb)
{
	list_t	*tmp;

	if ((tmp = malloc(sizeof(list_t))) == NULL)
		return (NULL);
	tmp->data = nb;
	tmp->next = list;
	list = tmp;
	return (list);
}
