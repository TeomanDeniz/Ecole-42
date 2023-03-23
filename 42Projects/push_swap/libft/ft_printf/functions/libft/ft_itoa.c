/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 16:34:11 by hdeniz            #+#    #+#             */
/*   Updated: 2023/01/03 15:06:49 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_printf.h"

static inline long
	ft_itoa_calculate_digits(long number)
{
	register long	counter;

	counter = 0;
	if (number < 0)
	{
		counter++;
		number *= -1;
	}
	else if (number == 0)
		return (1);
	while ((long)number > 0)
	{
		counter++;
		number = (long)number / 10;
	}
	return (counter);
}

char
	*ft_itoa(long number)
{
	register long	digits;
	char			*result;

	digits = ft_itoa_calculate_digits(number);
	result = malloc((digits + 1) * sizeof(char));
	if (number == 0)
		0[result] = 48;
	if (result == NULL)
		return (NULL);
	if (number < 0)
	{
		0[result] = '-';
		number *= -1;
	}
	result[digits] = '\0';
	while ((digits - 1) >= 0 && (long)number > 0)
	{	
		result[digits - 1] = ((long)number % 10) + 0x30;
		number = (long)number / 10;
		digits--;
	}
	return (result);
}
