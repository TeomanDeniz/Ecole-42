/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cos.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 11:38:23 by hdeniz            #+#    #+#             */
/*   Updated: 2023/02/14 11:45:42 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static inline double
	cos_fabs(long double input)
{
	if (input < 0)
		return (input * (long double)-1);
	return (input);
}

static inline double
	cos_fmod(long double x, long double y)
{
	while (x >= y)
		x -= y;
	return x;
}

double
	ft_cos(double input)
{
	long double		result;
	long double		term;
	register int	i;

	result = 1.0;
	term = 1.0;
	i = 0;
	input = cos_fmod(input, 2 * 3.14159265358979323846);
	while (i++, cos_fabs(term) > 1e-10)
	{
		term = -term * input * input / (2 * i - 1) / (2 * i);
		result += term;
	}
	return (result);
}
