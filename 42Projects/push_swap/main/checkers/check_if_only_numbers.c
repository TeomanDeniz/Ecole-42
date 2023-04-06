/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_if_only_numbers.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:41:29 by hdeniz            #+#    #+#             */
/*   Updated: 2023/02/13 13:41:30 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../push_swap.h"

static inline int	check_is_minus_valid(char *argv[], register int y);
static inline int	check_again(char reached_any_number, char minus_found);

int
	check_if_only_numbers(char *argv[])
{
	register int	x;
	register int	y;

	y = 0;
	while (++y, y[argv])
	{
		x = -1;
		while (++x, argv[y][x])
		{
			if (argv[y][x] == '-')
				if (check_is_minus_valid(argv, y))
					return (1);
			if ((argv[y][x] <= '9' && argv[y][x] >= '0') || \
				argv[y][x] == '-' || argv[y][x] == ' ' || \
				(argv[y][x] >= 9 && argv[y][x] <= 13))
				continue ;
			return (1);
		}
	}
	return (0);
}

static inline int
	check_is_minus_valid(char *argv[], register int y)
{
	register int	x;
	register char	minus_found;
	register char	reached_any_number;

	x = -1;
	minus_found = 0;
	reached_any_number = 0;
	while (++x, argv[y][x])
	{
		if (argv[y][x] == '-' && (minus_found || reached_any_number))
			return (1);
		if (argv[y][x] == '-')
			minus_found = 1;
		if (argv[y][x] >= '0' && argv[y][x] <= '9')
			reached_any_number = 1;
		if (argv[y][x] != '-' && !(argv[y][x] >= '0' && argv[y][x] <= '9'))
		{
			if (!reached_any_number && minus_found)
				return (1);
			minus_found = 0;
			reached_any_number = 0;
		}
	}
	return (check_again(reached_any_number, minus_found));
}

static inline int
	check_again(char reached_any_number, char minus_found)
{
	if (!reached_any_number && minus_found)
		return (1);
	return (0);
}
