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

long long
	ft_pow(register long long base, register signed int power)
{
	register volatile signed int	i;
	register volatile long long	x;

	i = 1;
	x = base;
	while (i++ < power)
		base = base * x;
	return (base);
}
