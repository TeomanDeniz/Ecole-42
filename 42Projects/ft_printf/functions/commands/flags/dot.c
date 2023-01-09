/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dot.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 16:40:42 by hdeniz            #+#    #+#             */
/*   Updated: 2023/01/08 16:40:43 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../../ft_printf.h"

void
	dot(int *flags, char c)
{
	int	counter;

	counter = 0;
	if (c == 'o' && flags['#'] == 1)
		counter = 1;
	if (c != 'f' && c != '%' && c != 's')
	{
		while (counter < flags['.'] - (flags[4] + (c == 'p') * 2))
		{
			write(1, "0", 1);
			flags[1] += 1;
			counter++;
		}
	}
	counter = 0;
	if (c != 'f' && flags['0'] && flags['.'] == -1)
	{
		while (counter < (flags[2] - (flags[4] + flags[3] + (c == 'p') * 2)))
		{
			write(1, "0", 1);
			flags[1] += 1;
			counter++;
		}
	}
}
