/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   square.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 16:38:58 by hdeniz            #+#    #+#             */
/*   Updated: 2023/01/08 16:39:00 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../../ft_printf.h"

void
	square(int *flags, char c, long long number)
{
	if (c == 'p')
	{
		write(1, "0x", 2);
		flags[1] += 2;
	}
	if (!(c == 'o' || c == 'x' || c == 'X' || c == 'b') \
		|| !flags['#'] || (flags[2] > flags[4] + flags['#'] && flags['0'] \
			&& flags['.'] == -1 && !flags['-']) || (number == 0 && c != 'o'))
		return ;
	if (c == 'x' || c == 'X' || c == 'b' || c == 'p')
	{
		write(1, "0", 1);
		write(1, &c, 1);
		flags[1] += 2;
		return ;
	}
	(void)"This place means octal with '#' flag";
	(void)"aka: '%o' command lol";
	write(1, "0", 1);
	flags[1] += 1;
}
