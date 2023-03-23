/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf__x.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 16:10:50 by hdeniz            #+#    #+#             */
/*   Updated: 2023/01/02 17:03:11 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../ft_printf.h"

void
	pf__x(int number, char keyword, int *flags)
{
	pf_flag_event(flags, keyword, (void *)&number, 'a');
	flags[1] += ft_itoa_base_int(number, 16, keyword, flags[0]);
	pf_flag_event(flags, keyword, (void *)&number, 'b');
}
