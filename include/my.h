/*
** EPITECH PROJECT, 2017
** my
** File description:
** library header
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

typedef struct list
{
	int data;
	struct list *next;
} list_t;

int	my_putstr(char const *);
int	my_strlen(char const *);
list_t	*my_params_to_list(int, char const * const *);
int	my_rev_list(list_t **);
list_t	*push_in_list(list_t *, int);
void	sort_list(list_t **, list_t **);
long	my_getnbr(char const *);
list_t	*my_delete_nodes(list_t *);
