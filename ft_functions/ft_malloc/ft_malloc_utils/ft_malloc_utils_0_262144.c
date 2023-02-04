/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc_utils_0_262144.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 18:00:09 by hdeniz            #+#    #+#             */
/*   Updated: 2023/02/04 18:07:36 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../ft_malloc.h"

int
	*ft_malloc_utils_0_4(register unsigned int size)
{
	static int	__temp_0__[0];
	static int	__temp_1__[1];
	static int	__temp_2__[2];
	static int	__temp_4__[4];

	if (size == 0)
		return (__temp_0__);
	if (size == 1)
		return (__temp_1__);
	if (size == 2)
		return (__temp_2__);
	return (__temp_4__);
}

int
	*ft_malloc_utils_8_64(register unsigned int size)
{
	static int	__temp_8__[8];
	static int	__temp_16__[16];
	static int	__temp_32__[32];
	static int	__temp_64__[64];

	if (size <= 8)
		return (__temp_8__);
	if (size <= 16)
		return (__temp_16__);
	if (size <= 32)
		return (__temp_32__);
	return (__temp_64__);
}

int
	*ft_malloc_utils_128_1024(register unsigned int size)
{
	static int	__temp_128__[128];
	static int	__temp_256__[256];
	static int	__temp_512__[512];
	static int	__temp_1024__[1024];

	if (size <= 128)
		return (__temp_128__);
	if (size <= 256)
		return (__temp_256__);
	if (size <= 512)
		return (__temp_512__);
	return (__temp_1024__);
}

int
	*ft_malloc_utils_2048_16384(register unsigned int size)
{
	static int	__temp_2048__[2048];
	static int	__temp_4096__[4096];
	static int	__temp_8192__[8192];
	static int	__temp_16384__[16384];

	if (size <= 2048)
		return (__temp_2048__);
	if (size <= 4096)
		return (__temp_4096__);
	if (size <= 8192)
		return (__temp_8192__);
	return (__temp_16384__);
}

int
	*ft_malloc_utils_32768_262144(register unsigned int size)
{
	static int	__temp_32768__[32768];
	static int	__temp_65536__[65536];
	static int	__temp_131072__[131072];
	static int	__temp_262144__[262144];

	if (size <= 32768)
		return (__temp_32768__);
	if (size <= 65536)
		return (__temp_65536__);
	if (size <= 131072)
		return (__temp_131072__);
	return (__temp_262144__);
}
