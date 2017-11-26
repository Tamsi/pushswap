/*
** EPITECH PROJECT, 2017
** my_concat_list
** File description:
** concatenate 2 linked lists
*/

#include "my.h"

int	my_concat_list(list_t **begin1, list_t *begin2)
{
	list_t *temp;

	if (*begin1 == NULL)
		*begin1 = begin2;
	else {
		if (begin2 != NULL) {
			temp = *begin1;
			while (temp->next != NULL)
				temp = temp->next;
			temp->next = begin2;
		}
	}
	return (0);
}
