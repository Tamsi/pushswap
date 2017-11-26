/*
** EPITECH PROJECT, 2017
** my_params_to_list
** File description:
** from arguments to linked list
*/

#include "my.h"

list_t	*add_to_list(int data, list_t *list)
{
	list_t *new_list;

	if ((new_list = malloc(sizeof(list_t))) == NULL)
		return (NULL);
	new_list->data = data;
	new_list->next = list;
	return (new_list);
}

list_t	*my_params_to_list(int ac, char const * const *av)
{
	list_t *list;
	int i;

	i = 1;
	list = NULL;
	while(i <= ac) {
		list = add_to_list(my_getnbr(av[i]), list);
		i++;
	}
	return (list);
}
