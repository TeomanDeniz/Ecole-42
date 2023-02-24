/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_modf.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 19:12:33 by hdeniz            #+#    #+#             */
/*   Updated: 2023/02/24 19:12:35 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_math.h"

double
	my_modf(register double x, double *integer)
{
	register double	fractional;

	if (isnan(x) || isinf(x))
	{
		*integer = x;
		return (0.0);
	}
	fractional = (double)(x - (long)x);
	integer = x - fractional;
	return (fractional);
}
