/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf__s.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 16:57:03 by hdeniz            #+#    #+#             */
/*   Updated: 2023/01/02 17:02:56 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../ft_printf.h"

void
	pf__s(char *string, int *flags)
{
	register int	counter;

	counter = 0;
	if (!string)
	{
		write(flags[0], "(null)", 6);
		flags[1] += 6;
		return ;
	}
	pf_flag_event(flags, 's', (void *)string, 'a');
	if (flags['.'] == -1)
	{
		flags[1] += ft_strlen(string);
		write(flags[0], string, ft_strlen(string));
	}
	else
	{	
		while (string[counter] && counter < flags['.'])
		{
			flags[1] += 1;
			write(flags[0], &string[counter++], 1);
		}
	}
	pf_flag_event(flags, 's', (void *)string, 'b');
}
