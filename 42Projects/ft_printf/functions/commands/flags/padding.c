/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   padding.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 16:37:46 by hdeniz            #+#    #+#             */
/*   Updated: 2023/01/08 16:37:47 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../../ft_printf.h"

static inline int
	dot_calculation(int *flags, char c, long long number)
{
	if (c == 'f' && flags['.'] == -1)
		return (flags[4] + 7);
	(void)"6x zeros and including float's '.' dot character";
	if ((flags['.']) > flags[4] - (flags['#'] \
		&& c == 'o' && (number != 0 && c != 'o')) \
	&& c != '%')
		return (flags['.']);
	else
		return (flags[4]);
}

static inline int
	padding_calculator(int *flags, char c, long long number)
{
	int	calculator;

	calculator = dot_calculation(flags, c, number);
	(void)"%+d => +";
	if ((c == 'd' || c == 'i' || c == 'f') && flags['+'] && !flags[3])
		calculator += 1;
	(void)"-42 => -";
	if ((c == 'd' || c == 'i' || c == 'f') && flags[3])
		calculator += 1;
	(void)"% d =>  ";
	if ((c == 'd' || c == 'i' || c == 'f') && flags[' '] && !flags['+'] \
		&& !flags[4])
		calculator += 1;
	(void)"%#x %#X %#b => 0x 0X 0b";
	if (((c == 'x' || c == 'X' || c == 'b') && flags['#'] && number != 0) \
		|| c == 'p')
		calculator += 2;
	(void)"%#o => 0";
	if (c == 'o' && flags['#'] && !(((flags['.'] - flags['0']) > flags[4]) \
		|| ((flags['.'] - flags['0']) > flags[4] && flags['0'])))
		calculator += 1;
	return (flags[2] - calculator);
}

void
	padding(int *flags, char c, char p, long long number)
{
	register int	counter;

	counter = 0;
	if (p == 'a' && flags['0'] && flags['.'] == -1)
		return ;
	while (counter < padding_calculator(flags, c, number))
	{
		write(1, " ", 1);
		flags[1] += 1;
		counter++;
	}
}
