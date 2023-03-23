/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 13:22:22 by hdeniz            #+#    #+#             */
/*   Updated: 2022/12/29 13:25:07 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../ft_printf.h"

int
	ft_atoi(const char *string)
{
	register int	counter;
	register int	sign;
	register int	result;

	counter = 0;
	sign = 1;
	result = 0;
	if (!string)
		return (0);
	while (string[counter] == 32 || \
		(string[counter] >= 9 && string[counter] <= 13))
		counter++;
	if (string[counter] == 43 || string[counter] == 45)
	{
		if (string[counter] == 45)
			sign *= -1;
		counter++;
	}
	while (string[counter] >= 48 && string[counter] <= 57)
	{
		result = (result * 10) + (string[counter] - 48);
		counter++;
	}
	return (result * sign);
}
