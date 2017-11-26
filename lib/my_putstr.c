/*
** EPITECH PROJECT, 2017
** my_pustr
** File description:
** prompt a string
*/

#include "my.h"

int	my_putstr(char const *str)
{
	for (int i = 0; str[i]; i++)
		write(1, &str[i], 1);
	return (0);
}
