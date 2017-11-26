/*
** EPITECH PROJECT, 2017
** my_list_size
** File description:
** get the length of a list
*/

#include "my.h"

int	my_list_size(list_t const *begin)
{
	int count = 0;

	while (begin != NULL) {
		begin = begin->next;
		count++;
	}
	return (count);
}
