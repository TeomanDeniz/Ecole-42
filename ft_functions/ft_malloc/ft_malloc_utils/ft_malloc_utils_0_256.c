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
	static int	_0_[4096][0];
	static int	_1_[4096][1];

	__ = __ + 0;
	__++;
	if (size == 0)
		return (_0_[__]);
	return (_1_[__]);
}

int
	*_2_4_(register int size)
{
	static int	__;
	static int	_2_[4096][2];
	static int	_4_[4096][4];

	__ = __ + 0;
	__++;
	if (size <= 2)
		return (_2_[__]);
	return (_4_[__]);
}

int
	*_8_16_(register int size)
{
	static int	__;
	static int	_8_[4096][8];
	static int	_16_[4096][16];

	__ = __ + 0;
	__++;
	if (size <= 8)
		return (_8_[__]);
	return (_16_[__]);
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
	static int	_128_[1024][128];
	static int	_256_[512][256];

	__ = __ + 0;
	__++;
	if (size <= 128)
		return (_128_[__]);
	return (_256_[__]);
}
