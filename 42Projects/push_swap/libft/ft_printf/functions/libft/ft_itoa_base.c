/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 16:34:40 by hdeniz            #+#    #+#             */
/*   Updated: 2023/01/07 16:35:23 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../ft_printf.h"

static inline void
	send_number(int index, int *len, char c, int fd)
{
	if (fd != 0)
	{
		if (c == 'X')
			ft_putchar_fd("0123456789ABCDEF"[index], fd);
		else
			ft_putchar_fd("0123456789abcdef"[index], fd);
	}
	*len += 1;
}

int
	ft_itoa_base(unsigned long long n, int b, char c, int fd)
{
	int	number_list[0x1000];
	int	index;
	int	len;

	index = 0;
	len = 0;
	if ((c == 'd' || c == 'i') && (int)n < 0)
		n *= -1;
	if (n == 0)
	{
		len = 1;
		ft_putchar('0');
	}
	while (n)
	{
		number_list[index++] = n % b;
		n = n / b;
	}
	while (index--)
		send_number(number_list[index], &len, c, fd);
	return (len);
}

int
	ft_itoa_base_int(unsigned int n, int b, char c, int fd)
{
	int	number_list[0x1000];
	int	index;
	int	len;

	index = 0;
	len = 0;
	if ((c == 'd' || c == 'i' || c == 'u') && (int)n < 0)
		n *= -1;
	if (n == 0)
	{
		len = 1;
		ft_putchar('0');
	}
	while (n)
	{
		number_list[index++] = n % b;
		n = n / b;
	}
	while (index--)
		send_number(number_list[index], &len, c, fd);
	return (len);
}

int
	ft_ibl(unsigned long long n, int b, char c)
{
	int	number_list[0x1000];
	int	index;
	int	len;

	(void)"itoa base len (ibl)";
	index = 0;
	len = 0;
	if ((c == 'd' || c == 'i') && (int)n < 0)
		n *= -1;
	if (n == 0)
		len = 1;
	while (n)
	{
		number_list[index++] = n % b;
		n = n / b;
	}
	while (index--)
		send_number(number_list[index], &len, c, 0);
	return (len);
}

int
	ft_ibil(unsigned int n, int b, char c)
{
	int	number_list[0x1000];
	int	index;
	int	len;

	(void)"itoa base int len (ibil)";
	index = 0;
	len = 0;
	if ((c == 'd' || c == 'i' || c == 'u') && (int)n < 0)
		n *= -1;
	if (n == 0)
		len = 1;
	while (n)
	{
		number_list[index++] = n % b;
		n = n / b;
	}
	while (index--)
		send_number(number_list[index], &len, c, 0);
	return (len);
}
