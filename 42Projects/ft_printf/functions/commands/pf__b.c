/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf__b.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 15:33:25 by hdeniz            #+#    #+#             */
/*   Updated: 2023/01/03 15:34:07 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../ft_printf.h"

void
	pf__b(int number, int *flags)
{
	pf_flag_event(flags, 'b', (void *)&number, 'a');
	flags[1] += ft_itoa_base_int(number, 2, 'b');
	pf_flag_event(flags, 'b', (void *)&number, 'b');
}
