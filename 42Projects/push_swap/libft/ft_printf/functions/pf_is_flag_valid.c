/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_is_flag_valid.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 19:15:14 by hdeniz            #+#    #+#             */
/*   Updated: 2022/12/28 19:43:10 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../ft_printf.h"

int
	pf_is_flag_valid(const char *(__), int x, int reset_flags, int *flags)
{
	int	while_loop;

	while_loop = pf_perc_check((__), x++);
	while (while_loop < '@' && while_loop != -1 \
		&& while_loop != '%' && while_loop != 0)
	{
		flags[while_loop] = 1;
		while_loop = pf_perc_check((__), x);
		x += 1;
	}
	if (reset_flags == 1)
		pf_set_flags(flags);
	if (while_loop == -1)
		return (-1);
	if (while_loop > '@' || while_loop == '%')
		return (x);
	return (0);
}

/*
 * Check if flag valid before doing (write) events
 * returns x if %+-#2d flag valid
 */
