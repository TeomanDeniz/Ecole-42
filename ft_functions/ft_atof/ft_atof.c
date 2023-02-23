/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 11:13:38 by hdeniz            #+#    #+#             */
/*   Updated: 2023/02/23 15:55:08 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static inline int
	number_len(register int number)
{
	register int	counter;

	counter = -1;
	while (++counter, number)
		number /= 10;
	return (counter);
}

static inline double
	atof_pow(register double number, register double power)
{
	register int	counter;
	register double	x;

	counter = 0;
	x = number;
	while (++counter, counter < power)
		number = number * x;
	return (number);
}

double
	ft_atof(const char *restrict string)
{
	register int	friction;
	register int	integer;
	register double	sign;
	register int	x;

	friction = 1;
	integer = 0;
	sign = 1;
	x = 0;
	while (string[x] == ' ' || (string[x] <= 13 && string[x] >= 9))
		x++;
	if (string[x] == '-')
	{
		sign *= -1;
		x++;
	}
	while (++x, string[x - 1] != '.' && string[x - 1] \
		&& string[x - 1] >= '0' && string[x - 1] <= '9')
		integer = (10 * integer) + (string[x - 1] & 0B1111);
	while (++x, string[x - 1] && string[x - 1] >= '0' && string[x - 1] <= '9')
		friction = (10 * friction) + (string[x - 1] & 0B1111);
	x = number_len(friction) - 1;
	if (--friction, friction == 0)
		return ((double)integer * sign);
	return ((((double)integer) + ((double)friction / atof_pow(10, x))) * sign);
}
