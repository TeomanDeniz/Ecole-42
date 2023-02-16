/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sin.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 11:38:23 by hdeniz            #+#    #+#             */
/*   Updated: 2023/02/16 18:21:53 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static inline double
	sin_fabs(long double input)
{
	if (input < 0)
		return (input * (long double)-1);
	return (input);
}

static inline double
	sin_fmod(long double x, long double y)
{
	return (x - (long)(x / y) * y);
}

double
	ft_sin(long double input)
{
	long double		result;
	long double		term;
	register int	i;

	input = sin_fmod(input, 2 * 3.14159265358979323846);
	i = 3;
	term = input;
	result = input;
	while (sin_fabs(term) > 1e-15)
	{
		term = -term * input * input / (i * (i - 1));
		result += term;
		i += 2;
	}
	return (result);
}
