/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pt_set_flags.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 19:53:51 by hdeniz            #+#    #+#             */
/*   Updated: 2022/12/28 19:54:24 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../ft_printf.h"

int
	pf_set_flags(int *flags)
{
	flags['+'] = 0;
	flags[' '] = 0;
	flags['#'] = 0;
	flags['0'] = 0;
	flags['-'] = 0;
	flags['.'] = -1;
	flags['1'] = 0;
	flags['2'] = 0;
	flags['3'] = 0;
	flags['4'] = 0;
	flags['5'] = 0;
	flags['6'] = 0;
	flags['7'] = 0;
	flags['8'] = 0;
	flags['9'] = 0;
	flags[4] = 0;
	flags[3] = 0;
	flags[2] = 0;
	flags[0] = 1;
	return (0);
}

int
	pf_set_flags_fd(int *flags, int fd)
{
	pf_set_flags(flags);
	flags[0] = fd;
	return (0);
}

// flags[0] -> fd
// flags[1] -> Number of characters writen to screen
// flags[2] -> The number used for margin flag like: "%5d"
// flags[3] -> (Used in: pf_flag_event) Check if the number is minus or not.
// flags[4] -> (Used in: pf_flag_event) Get the size of the value if its number.

/*
 * For give or reset the variables of the global array "g_flags"
 */
