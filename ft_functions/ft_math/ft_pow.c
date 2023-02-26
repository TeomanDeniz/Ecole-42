/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 16:38:18 by hdeniz            #+#    #+#             */
/*   Updated: 2022/12/29 11:23:54 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_math.h"

static inline double
	check_if_even(register double number)
{
	if ((long)number % 2)
		return (1);
	return (0);
}

double
	ft_pow(register double base, register double power)
{
	register int	i;
	register double	x;

	if (ft_isnan(base) || ft_isnan(power))
		return (0.0 / 0.0);
	if (power < 0)
		return (-0.0);
	if (power == 0)
		return (1.0);
	if (ft_isinf(base) || ft_isinf(power))
	{
		if (ft_isinf(base) == -1)
			if (!ft_isinf(power) && check_if_even(power))
				return (-1.0 / 0.0);
		return (1.0 / 0.0);
	}
	i = 1;
	x = base;
	while (i++ < power)
		base = base * x;
	return (base);
}
