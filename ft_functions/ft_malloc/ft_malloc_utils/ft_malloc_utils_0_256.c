/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc_utils_0_256.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 18:00:09 by hdeniz            #+#    #+#             */
/*   Updated: 2023/02/05 06:04:18 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../ft_malloc.h"

int
	*_0_1_(register int size)
{
	static int	__;
	static int	__temp_0__[4096][0];
	static int	__temp_1__[4096][1];

	__ = __ + 0;
	__++;
	if (size == 0)
		return (__temp_0__[__]);
	return (__temp_1__[__]);
}

int
	*_2_4_(register int size)
{
	static int	__;
	static int	__temp_2__[4096][2];
	static int	__temp_4__[4096][4];

	__ = __ + 0;
	__++;
	if (size <= 2)
		return (__temp_2__[__]);
	return (__temp_4__[__]);
}

int
	*_8_16_(register int size)
{
	static int	__;
	static int	__temp_8__[4096][8];
	static int	__temp_16__[4096][16];

	__ = __ + 0;
	__++;
	if (size <= 8)
		return (__temp_8__[__]);
	return (__temp_16__[__]);
}

int
	*_32_64_(register int size)
{
	static int	__;
	static int	_32_[4096][32];
	static int	_64_[4096][64];

	__ = __ + 0;
	__++;
	if (size <= 32)
		return (_32_[__]);
	return (_64_[__]);
}

int
	*_128_256_(register int size)
{
	static int	__;
	static int	__temp_128__[1024][128];
	static int	__temp_256__[512][256];

	__ = __ + 0;
	__++;
	if (size <= 128)
		return (__temp_128__[__]);
	return (__temp_256__[__]);
}
