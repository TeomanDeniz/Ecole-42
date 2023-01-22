/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf__d.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 16:56:38 by hdeniz            #+#    #+#             */
/*   Updated: 2023/01/02 17:02:05 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../ft_printf.h"

void
	pf__d(int number, int *flags)
{
	if (number < 0)
		flags[3] = 1;
	pf_flag_event(flags, 'd', (void *)&number, 'a');
	flags[1] += ft_itoa_base_int(number, 10, 'd', flags[0]);
	pf_flag_event(flags, 'd', (void *)&number, 'b');
}
