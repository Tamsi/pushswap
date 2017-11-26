/*
** EPITECH PROJECT, 2017
** my_swap_functions
** File description:
** functions for the sort algorithm
*/

#include "my.h"

static void	pa(list_t **la, list_t **lb, int j)
{
	int nb;
	
	if (*lb == NULL)
		return;
	nb = (*lb)->data;
	*la = push_in_list(*la, nb);
	*lb = (*lb)->next;
	if (j == 1)
		my_putstr("pa ");
	else if (j == 2)
		my_putstr("pa");
	else
		my_putstr(" pa");
}

static void	pb(list_t **la, list_t **lb, int j)
{
	int nb;

	if (*la == NULL)
		return;
	nb = (*la)->data;
	*lb = push_in_list(*lb, nb);
	*la = (*la)->next;
	if (j == 1)
		my_putstr("pb ");
	else if (j == 2)
		my_putstr("pb");
	else
		my_putstr(" pb");
}

static void	sa(list_t **la, int j)
{
	list_t *temp;

	temp = *la;
	temp = temp->next;
	(*la)->next = temp->next;
	temp->next = *la;
	*la = temp;
	if (j == 1)
		my_putstr("sa ");
	else if (j == 2)
		my_putstr("sa");
	else
		my_putstr(" sa");
}

void	sort_list(list_t **la, list_t **lb)
{
	list_t *tmp;
	int i = 1;
	int j = 1;

	while (i == 1) {
		i = 0;
		tmp = *la;
		while ((*la)->next != NULL) {
			if ((*la)->data > (*la)->next->data) {
				sa(la, j);
				j += 1;
				i = 1;
			}
			pb(la, lb, j);
			j += 1;
			tmp = tmp->next;
		}
		while (*lb != NULL)
			pa(la, lb, j);
	}
}
