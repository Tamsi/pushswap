/*
** EPITECH PROJECT, 2017
** my_strlen
** File description:
** get the length of a string
*/

#include "my.h"

int	my_strlen(char const *str)
{
	int	i;

	i = 0;
	if (str == NULL)
		return (0);
	while (str[i])
		i++;
	return (i);
}
