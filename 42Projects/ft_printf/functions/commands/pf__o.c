/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf__o.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 15:31:04 by hdeniz            #+#    #+#             */
/*   Updated: 2023/01/03 15:33:22 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../ft_printf.h"

void
	pf__o(int number, int *flags)
{
	pf_flag_event(flags, 'o', (void *)&number, 'a');
	flags[1] += ft_itoa_base_int(number, 8, 'o');
	pf_flag_event(flags, 'o', (void *)&number, 'b');
}
