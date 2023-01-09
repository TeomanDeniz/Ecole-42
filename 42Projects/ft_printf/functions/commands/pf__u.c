/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf__u.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 16:54:56 by hdeniz            #+#    #+#             */
/*   Updated: 2023/01/02 17:03:03 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../ft_printf.h"

void
	pf__u(unsigned long number, int *flags)
{
	pf_flag_event(flags, 'u', (void *)&number, 'a');
	flags[1] += ft_itoa_base(number, 10, 'u');
	pf_flag_event(flags, 'u', (void *)&number, 'b');
}
