/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 16:38:18 by hdeniz            #+#    #+#             */
/*   Updated: 2022/12/28 16:38:54 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../ft_printf.h"

long
	ft_pow(register long base, register signed int power)
{
	register volatile signed int	counter;
	register volatile long			multiply;

	if (power < 0 || base == 0)
		return (0);
	if (power == 0)
		return (1);
	counter = 1;
	multiply = base;
	while (counter++ < power)
		base = base * multiply;
	return (base);
}
