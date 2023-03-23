/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 16:25:00 by hdeniz            #+#    #+#             */
/*   Updated: 2022/12/06 16:26:11 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../ft_printf.h"

void
	ft_putnbr_fd(long number_in, int fd)
{
	register long	number;

	number = number_in;
	if (number < 0)
	{
		ft_putchar_fd('-', fd);
		number = (number * -1);
	}
	if (number < 10)
		ft_putchar_fd(number + 0x30, fd);
	if (number > 9)
	{
		ft_putnbr_fd(number / 10, fd);
		ft_putnbr_fd(number % 10, fd);
	}
}

void
	ft_putnbr(long number_in)
{
	ft_putnbr_fd(number_in, 1);
}
