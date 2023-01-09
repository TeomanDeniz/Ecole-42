/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_flag_collector.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 19:38:37 by hdeniz            #+#    #+#             */
/*   Updated: 2022/12/28 19:43:51 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../ft_printf.h"

static inline int
	get_number(const char *(__), int *x)
{
	char			result[8192];
	register int	counter;

	counter = 0;
	if ((__)[*x] >= '0' && (__)[*x] <= '9')
	{
		while ((__)[*x] >= '0' && (__)[*x] <= '9')
		{
			result[counter++] = (__)[*x];
			*x += 1;
		}
		result[counter] = '\0';
		return (ft_atoi(result));
	}
	return (0);
}

static inline void
	padding_checker(const char *(__), int *x, int *flags)
{
	if ((__)[*x] >= '1' && (__)[*x] <= '9')
		flags[2] = get_number((__), x);
	else
		flags[2] = 0;
}

static inline void
	dot_checker(const char *(__), int *x, int *flags)
{
	*x += 1;
	while ((__)[*x] == '0')
		*x += 1;
	if ((__)[*x] >= '1' && (__)[*x] <= '9')
		flags['.'] = get_number((__), x);
	else
		flags['.'] = 0;
}

void
	pf_flag_collector(const char *(__), int *x, int *flags)
{
	register int	flag;

	*x += 1;
	flag = pf_perc_check((__), *x);
	while (flag != 0 && flag != -1 && flag != '%' && flag < '@')
	{
		if (flag == '+' || flag == '-' \
			|| flag == ' ' || flag == '#' || flag == '0')
		{
			flags[(int)flag] = 1;
			*x += 1;
		}
		if (flag == '.')
			dot_checker((__), x, flags);
		if (flag >= '1' && flag <= '9')
			padding_checker((__), x, flags);
		flag = pf_perc_check((__), *x);
	}
}

/*
 * After flags are valid to use: We now really doing flag execution
 * for get and detect all flags to prepare them useful.
 */
