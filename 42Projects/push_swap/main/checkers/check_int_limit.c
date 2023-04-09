/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_int_limit.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 16:42:09 by hdeniz            #+#    #+#             */
/*   Updated: 2023/04/01 17:42:36 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

static inline int	maintenance_work(register char character);

int
	check_int_limit(char *arg[])
{
	register int	x;
	register int	y;
	register int	counter;

	x = 0;
	y = -1;
	counter = 0;
	while (++x, arg[x])
	{
		while (++y, arg[x][y])
			if (maintenance_work(arg[x][y]))
				return (1);
		y = -1;
	}
	while (arg[x - 1][counter])
		++counter;
	if (maintenance_work(arg[x - 1][counter]))
		return (1);
	return (0);
}

static inline int
	maintenance_work(register char character)
{
	static long		number;
	static char		sign;
	static short	size;

	number = number + 0;
	sign = sign + 0;
	size = size + 0;
	if ((number > 2147483647L + (long)sign) || size >= 11)
		return (1);
	if (character == '-' || (character >= '0' && character <= '9'))
	{
		if (character == '-')
			sign = 1;
		if (character >= '0' && character <= '9')
			number = (long)((size++, number * 10L) + (character & 0B1111L));
	}
	else
	{
		sign = 0;
		number = 0L;
		size = 0;
	}
	return (0);
}
