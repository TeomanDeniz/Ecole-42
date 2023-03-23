/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf__p.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 16:55:48 by hdeniz            #+#    #+#             */
/*   Updated: 2023/01/02 17:02:13 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../ft_printf.h"

void
	pf__p(unsigned long long address, int *flags)
{
	pf_flag_event(flags, 'p', (void *)&address, 'a');
	flags[1] += ft_itoa_base(address, 16, 'x', flags[0]);
	pf_flag_event(flags, 'p', (void *)&address, 'b');
}
