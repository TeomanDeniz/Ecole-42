/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf__f.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 12:07:37 by hdeniz            #+#    #+#             */
/*   Updated: 2023/01/03 12:08:15 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../ft_printf.h"

static inline long
	zero_counter(double number, int *flags, int counter)
{
	register long	zeros_at_start;
	register int	while_stopper;
	register long	integer;

	while_stopper = 0;
	zeros_at_start = -1;
	number *= 10;
	integer = (long)number;
	while (while_stopper == 0 \
		&& (zeros_at_start + flags[1]) < (flags[1] + flags['.']))
	{
		if (integer % 10 != 0)
			while_stopper = 1;
		zeros_at_start += 1;
		integer = (long)number;
		number *= 10;
	}
	while (counter++ <= zeros_at_start - while_stopper)
	{
		flags[1] += 1;
		ft_putchar_fd('0', flags[0]);
	}
	return (while_stopper);
}

static inline long
	get_fraction(long integer, double number, int *flags)
{
	if (flags['.'] == -1)
		flags['.'] = 6;
	if (number - integer == 0)
		return (-1);
	return (ft_abs((long)((number - integer) * ft_pow(10, flags['.']))));
}

static inline void
	f_main(double number, int *flags)
{
	long			fraction;
	long			integer;
	register int	checker;

	fraction = 0;
	integer = (long)number;
	ft_putnbr_fd(integer, flags[0]);
	if (flags['.'] != 0)
	{
		fraction = get_fraction(integer, number, flags);
		if (fraction % 10 == 9)
			fraction += 1;
		ft_putchar_fd('.', flags[0]);
		checker = zero_counter(number, flags, 1);
		if (fraction != -1 && checker == 1)
			ft_putnbr_fd(fraction, flags[0]);
		flags[1] += ft_strlen(ft_itoa(integer)) + \
			ft_strlen(ft_itoa(ft_abs(fraction)));
	}
	else
		flags[1] += ft_strlen(ft_itoa(integer));
}

void
	pf__f(double number, int *flags)
{
	pf_flag_event(flags, 'f', (void *)&number, 'a');
	f_main(number, flags);
	pf_flag_event(flags, 'f', (void *)&number, 'b');
}
