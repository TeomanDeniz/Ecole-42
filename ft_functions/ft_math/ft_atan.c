/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atan.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 15:59:43 by hdeniz            #+#    #+#             */
/*   Updated: 2023/02/23 15:59:44 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_math.h"

double
	ft_atan(register double x)
{
	register double	abs_x;
	register double	result;
	register int	counter;
	register double	power;

	abs_x = ft_fabs(x);
	result = 0.0;
	if (abs_x <= 1)
	{
		counter = 0;
		while (++counter, counter <= 15)
		{
			power = (ft_pow(x, counter) / counter);
			if (counter % 4 == 1)
				result += power;
			else
				result -= power;
			counter += 2;
		}
		return (result);
	}
	result = M_PI_2 - ft_atan(1 / abs_x);
	if (x < 0)
		result *= -1;
	return (result);
}
