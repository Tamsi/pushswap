/*
** EPITECH PROJECT, 2017
** my_getnbr
** File description:
** from string to int
*/

#include "my.h"

long    my_getnbr_getsign(char const *str)
{
	long  i;
	long  sign;

	i = 0;
	sign = 0;
	while (i < my_strlen(str)) {
		if (str[i] == '-' || str[i] == '+') {
			if (str[i] == '-')
				sign = sign + 1;
		} else {
			return ((sign + 1) % 2 * 2 - 1);
		}
		i = i + 1;
	}
	return ((sign + 1) % 2 * 2 - 1);
}

long    my_getnbr_getsign_rank(char const *str)
{
	long  i;

	i = 0;
	while (i < my_strlen(str) && (str[i] == '-' || str[i] == '+'))
		i++;
	return (i);
}

long    my_getnbr(char const *str)
{
	long  value;
	long  i;
	long  sign;

	value = 0;
	sign = my_getnbr_getsign(str);
	i = my_getnbr_getsign_rank(str);
	while (i < my_strlen(str)) {
		if (str[i] >= '0' && str[i] <= '9') {
			if (value > 2147483648 && str[i] > '7')
				return (0);
			value = value * 10 + str[i] - 48;
		} else {
			i = my_strlen(str);
		}
		i++;
	}
	if (value > 2147483647)
		return (0);
	return (value * sign);
}
