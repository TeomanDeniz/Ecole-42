/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   margin.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 16:37:46 by hdeniz            #+#    #+#             */
/*   Updated: 2023/01/26 15:21:47 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../../ft_printf.h"

static inline int
	dot_calculation(int *flags, char c, long long number)
{
	if (c == 'f' && flags['.'] == -1)
		return (flags[4] + 7);
	else if (c == 'f' && flags['.'] != 0)
		return (flags[4] + flags['.'] + 1);
	if ((flags['.']) > flags[4] - (flags['#'] \
		&& c == 'o' && (number != 0 && c != 'o')) \
	&& c != '%')
		return (flags['.']);
	else
		return (flags[4]);
}

static inline int
	margin_calculator(int *flags, char c, long long number)
{
	int	calculator;

	calculator = dot_calculation(flags, c, number);
	if ((c == 'd' || c == 'i' || c == 'f') && flags['+'] && !flags[3])
		calculator += 1;
	if ((c == 'd' || c == 'i' || c == 'f') && flags[3])
		calculator += 1;
	if ((c == 'd' || c == 'i' || c == 'f') && flags[' '] && !flags['+'] \
		&& !flags[3])
		calculator += 1;
	if (((c == 'x' || c == 'X' || c == 'b') && flags['#'] && number != 0) \
		|| c == 'p')
		calculator += 2;
	if (c == 'o' && flags['#'] && !(((flags['.'] - flags['0']) > flags[4]) \
		|| ((flags['.'] - flags['0']) > flags[4] && flags['0'])))
		calculator += 1;
	return (flags[2] - calculator);
}

void
	margin(int *flags, char c, char p, long long number)
{
	register int	counter;

	counter = 0;
	if (p == 'a' && flags['0'] && flags['.'] == -1)
		return ;
	while (counter < margin_calculator(flags, c, number))
	{
		write(flags[0], " ", 1);
		flags[1] += 1;
		counter++;
	}
}
