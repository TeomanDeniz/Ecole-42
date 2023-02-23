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

double
	ft_pow(register double base, register double power)
{
	register int	i;
	register double	x;

	i = 1;
	x = base;
	if (power < 0 || (int)x == 0)
		return (0);
	if (power == 0)
		return (1);
	while (i++ < power)
		base = base * x;
	return (base);
}
