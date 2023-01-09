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
	(void)"For get leng of the output. Used in the pt_set_flags()";
	flags[3] = 0;
	(void)"For get if number is minus '-' or not. Used in the pt_set_flags()";
	flags[2] = 0;
	(void)"For count the padding nurmal number. Used on everywhere lol";
	return (0);
}

/*
 * For give or reset the variables of the global array "g_flags"
 */
