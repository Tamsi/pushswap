/*
** EPITECH PROJECT, 2017
** my_map_if_eq
** File description:
** 
*/

#include "my.h"

int	my_map_if_eq(list_t *begin, int (*f)(), void const *data_ref, int(*cmp)())
{
	while (begin != NULL) {
		if (cmp(begin->data, data_ref) == 0)
			f(begin->data);
		begin = begin->next;
	}
	return (0);
}
