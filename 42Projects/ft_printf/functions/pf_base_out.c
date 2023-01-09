/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_base_out.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 16:58:51 by hdeniz            #+#    #+#             */
/*   Updated: 2022/12/28 17:00:04 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../ft_printf.h"

void
	pf_base_out(register long long number, const char *base, int *flags)
{
	register unsigned volatile int	base_len;

	base_len = ft_strlen(base);
	if (number < (long)base_len)
	{
		flags[1] += 1;
		write(1, &base[(int)number], 1);
	}
	if (number > (long)(base_len - 1))
	{
		pf_base_out((long)(number / base_len), base, flags);
		pf_base_out((long)(number % base_len), base, flags);
	}
}

void
	pf_base_out_int(register int number, const char *base, int *flags)
{
	register unsigned volatile int	base_len;

	if (number < 0)
		number = ~number;
	base_len = ft_strlen(base);
	if (number < (int)base_len)
	{
		flags[1] += 1;
		write(1, &base[(int)number], 1);
	}
	if (number > (int)(base_len - 1))
	{
		pf_base_out((int)(number / base_len), base, flags);
		pf_base_out((int)(number % base_len), base, flags);
	}
}
