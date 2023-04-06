/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_if_not_same.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:41:17 by hdeniz            #+#    #+#             */
/*   Updated: 2023/02/13 13:41:20 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../push_swap.h"

static inline int
	number_compare(int *numbers, register int len)
{
	register int	x;
	register int	y;

	x = -1;
	y = -1;
	while (++x, x < len)
	{
		y = 0;
		while (++y, y < len)
		{
			if (x == y)
				continue ;
			if (numbers[x] == numbers[y])
				return (1);
		}
	}
	return (0);
}

static inline int
	*open_size(char *argv[])
{
	register int	counter_strings;
	register int	counter_characters;
	register int	result;

	counter_strings = 0;
	counter_characters = -1;
	result = 0;
	while (++counter_strings, argv[counter_strings])
	{
		while (++counter_characters, argv[counter_strings][counter_characters])
			result++;
		counter_characters = 0;
	}
	return ((int *) ft_malloc(result * sizeof(int)));
}

static inline int
	number_collector(const char *argv, register int coordinate)
{
	static int		number;
	register int	result;

	number = number + 0;
	if (argv[coordinate] != ' ' \
		&& argv[coordinate] != 9 && argv[coordinate] != 0)
	{
		number += (number * 10) + (argv[coordinate] & 0B1111);
		if (argv[coordinate + 1])
			return (0);
	}
	result = number;
	number = 0;
	return (result);
}

int
	check_if_not_same(char *argv[])
{
	register int	character;
	register int	string;
	register int	counter;
	int				*numbers;

	string = 0;
	counter = 0;
	numbers = open_size(argv);
	while (++string, string[argv])
	{
		character = -1;
		while (++character, argv[string][character])
		{
			numbers[counter] = number_collector(argv[string], character);
			if (numbers[counter] == 0)
				continue ;
			counter++;
		}
	}
	return (number_compare(numbers, counter));
}
