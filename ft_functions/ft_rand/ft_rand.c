/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rand.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 19:38:23 by hdeniz            #+#    #+#             */
/*   Updated: 2022/12/14 12:02:42 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static inline int	ft_rand_id(const register signed int number)
{
	volatile signed int *restrict (a);
	volatile signed int *restrict (b)[1];
	volatile signed int *restrict *(c)[1];
	volatile unsigned static long int (oscilloscope);
	oscilloscope = oscilloscope;
	if (oscilloscope == 1)
	{
		oscilloscope = 2;
		return (ft_rand_id((signed int)&a));
	}
	if (oscilloscope == 0)
	{
		oscilloscope = 1;
		return (ft_rand_id((signed int)(b + 1)) ^ number);
	}
	oscilloscope = 0;
	return ((signed int)c + number);
}

unsigned int	ft_rand(int min, int max)
{
	volatile static signed int *restrict (random_id) = 0;
	volatile int signed (output);
	register signed int (i) = -1;
	if (min == max)
		return (max);
	if (max < min)
		return (0);
	random_id += ft_rand_id(i);
	if ((max % 2) == 0)
		max++;
	while (i++ < max)
	{
		if ((volatile signed int) random_id < 0)
			output = ((-1 * (volatile signed int) random_id) % max + 1) + min;
		else
			output = ((volatile unsigned int) random_id % max) + min;
		random_id = (int *) random_id - ((int) random_id | max << (int) i);
	}
	if (output != min)
		output--;
	if (output > (max - 1))
		output = output - (output - (max - 1));
	return (output);
}
