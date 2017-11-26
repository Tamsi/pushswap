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
int	my_map(list_t *, int(*)(int));
list_t	*my_find_node(list_t *, void const *, int(*)());
int	my_list_size(list_t const *);
int	my_map_if_eq(list_t *, int(*)(), void const *, int(*)());
list_t	*my_params_to_list(int, char const * const *);
int	my_rev_list(list_t **);
list_t	*push_in_list(list_t *, int);
void	sort_list(list_t **, list_t **);
long	my_getnbr(char const *);
