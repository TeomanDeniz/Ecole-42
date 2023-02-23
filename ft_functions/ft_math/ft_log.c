/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_log.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 20:35:52 by hdeniz            #+#    #+#             */
/*   Updated: 2023/02/23 15:52:38 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_math.h"

double
	ft_log(register double x)
{
	register int	counter;
	register double	term;
	register double	sum;
	register double	z;

	counter = 0;
	sum = (x - 1) / (x + 1);
	term = (x - 1) / (x + 1);
	z = ((x - 1) / (x + 1)) * ((x - 1) / (x + 1));
	while (++counter, ft_fabs(term / (2 * counter)) > 1E-15)
	{
		term *= z;
		sum += term / (2 * counter + 1);
	}
	return (2 * sum);
}
