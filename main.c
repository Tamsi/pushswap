/*
** EPITECH PROJECT, 2017
** main
** File description:
** main
*/

#include "my.h"

static int	check_errors(char const * const *av)
{
	for (int i = 1; av[i]; i++) {
		if (av[i][0] < '0' ||  av[i][0] > '9')
			return (84);
		else if (my_strlen(av[i]) > 1)
			return (84);
	}
	return (0);
}

int	main(int ac, char const * const *av)
{
	list_t *la;
	list_t *lb;

	if (ac <= 1 || check_errors(av) == 84 ||
	    (lb = malloc(sizeof(list_t *))) == NULL) {
		write(2, "\n", 1);
		return (84);
	}
	la = my_params_to_list(ac, av);
	my_rev_list(&la);
	sort_list(&la, &lb);
	write(1, "\n", 1);
	return (0);
}
