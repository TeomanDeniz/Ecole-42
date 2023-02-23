/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 16:36:16 by hdeniz            #+#    #+#             */
/*   Updated: 2022/12/06 16:36:19 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int
	ft_atoi(const char *restrict string)
{
	register int	counter;
	register int	sign;
	register int	result;

	counter = 0;
	sign = 1;
	result = 0;
	while (string[counter] == ' ' \
		|| (string[counter] >= 9 && string[counter] <= 13))
		counter++;
	if (string[counter] == '-' || string[counter] == '+')
		if (++counter, string[counter - 1] == '-')
			sign *= -1;
	--counter;
	while (++counter, string[counter] >= '0' && string[counter] <= '9')
		result = (result * 10) + (string[counter] & 0B1111);
	return (result * sign);
}
