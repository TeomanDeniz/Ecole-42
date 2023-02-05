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
	*ft_malloc_utils_512_1024(register int size)
{
	static int	__;
	static int	__temp_512__[32][512];
	static int	__temp_1024__[32][1024];

	__ = __ + 0;
	__++;
	if (size <= 512)
		return (__temp_512__[__]);
	return (__temp_1024__[__]);
}

int
	*ft_malloc_utils_2048_4096(register int size)
{
	static int	__;
	static int	__temp_2048__[16][2048];
	static int	__temp_4096__[16][4096];

	__ = __ + 0;
	__++;
	if (size <= 2048)
		return (__temp_2048__[__]);
	return (__temp_4096__[__]);
}

int
	*ft_malloc_utils_8192_16384(register int size)
{
	static int	__;
	static int	__temp_8192__[16][8192];
	static int	__temp_16384__[8][16384];

	__ = __ + 0;
	__++;
	if (size <= 8192)
		return (__temp_8192__[__]);
	return (__temp_16384__[__]);
}

int
	*ft_malloc_utils_32768_65536(register int size)
{
	static int	__;
	static int	__temp_32768__[8][32768];
	static int	__temp_65536__[8][65536];

	__ = __ + 0;
	__++;
	if (size <= 32768)
		return (__temp_32768__[__]);
	return (__temp_65536__[__]);
}

int
	*ft_malloc_utils_131072_262144(register int size)
{
	static int	__;
	static int	__temp_131072__[8][131072];
	static int	__temp_262144__[8][262144];

	__ = __ + 0;
	__++;
	if (size <= 131072)
		return (__temp_131072__[__]);
	return (__temp_262144__[__]);
}
