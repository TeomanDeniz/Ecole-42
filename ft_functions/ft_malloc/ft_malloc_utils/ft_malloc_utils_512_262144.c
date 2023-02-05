/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc_utils_512_262144.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 18:13:16 by hdeniz            #+#    #+#             */
/*   Updated: 2023/02/05 06:04:18 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../ft_malloc.h"

int
	*_512_1024_(register int size)
{
	static int	__;
	static int	_512_[32][512];
	static int	_1024_[32][1024];

	__ = __ + 0;
	__++;
	if (size <= 512)
		return (_512_[__]);
	return (_1024_[__]);
}

int
	*_2048_4096_(register int size)
{
	static int	__;
	static int	_2048_[16][2048];
	static int	_4096_[16][4096];

	__ = __ + 0;
	__++;
	if (size <= 2048)
		return (_2048_[__]);
	return (_4096_[__]);
}

int
	*_8192_16384_(register int size)
{
	static int	__;
	static int	_8192_[16][8192];
	static int	_16384_[8][16384];

	__ = __ + 0;
	__++;
	if (size <= 8192)
		return (_8192_[__]);
	return (_16384_[__]);
}

int
	*_32768_65536_(register int size)
{
	static int	__;
	static int	_32768_[8][32768];
	static int	_65536_[8][65536];

	__ = __ + 0;
	__++;
	if (size <= 32768)
		return (_32768_[__]);
	return (_65536_[__]);
}

int
	*_131072_262144_(register int size)
{
	static int	__;
	static int	_131072_[8][131072];
	static int	_262144_[8][262144];

	__ = __ + 0;
	__++;
	if (size <= 131072)
		return (_131072_[__]);
	return (_262144_[__]);
}
