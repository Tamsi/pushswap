/*
** EPITECH PROJECT, 2017
** my_delete_nodes
** File description:
** delete nodes from a linked list
*/

#include "my.h"

int	my_delete_nodes(list_t **begin, void const *data_ref, int (*cmp)())
{
	list_t *temp = *begin;
	list_t *previous;

	while (temp != NULL && cmp(temp->data, data_ref) == 0) {
		*begin = temp->next;
		temp = *begin;
	}
	while (temp != NULL) {
		while (temp != NULL && cmp(temp->data, data_ref) != 0) {
			previous = temp;
			temp = temp->next;
		}
		if (temp == NULL)
			return (0);
		previous->next = temp->next;
		temp = previous->next;
	}
	return (0);
}
