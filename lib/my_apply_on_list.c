/*
** EPITECH PROJECT, 2017
** my_map
** File description:
** 
*/

#include "my.h"

int	my_map(list_t *begin, int (*f)(int))
{
	while (begin != NULL) {
		f(begin->data);
		begin = begin->next;
	}
	return (0);
}
