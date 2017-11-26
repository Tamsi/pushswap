/*
** EPITECH PROJECT, 2017
** my_rev_list
** File description:
** reverse a list order
*/

#include "my.h"

int	my_rev_list(list_t **begin)
{
	list_t *list;
	list_t *temp;
	list_t *next_elem;

	list = *begin;
	temp = NULL;
	while(list->next) {
		next_elem = list->next;
		list->next = temp;
		temp = list;
		list = next_elem;
	}
	list->next = temp;
	*begin = list;
	return (0);
}
