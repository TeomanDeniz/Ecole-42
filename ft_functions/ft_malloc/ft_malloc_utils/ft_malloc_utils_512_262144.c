/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc_utils_512_262144.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 18:13:16 by hdeniz            #+#    #+#             */
/*   Updated: 2023/02/04 23:35:18 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../ft_malloc.h"

int
	*ft_malloc_utils_512_1024(register int size)
{
	static int	__temp_512__[512];
	static int	__temp_1024__[1024];

	if (size <= 512)
		return (__temp_512__);
	return (__temp_1024__);
}

int
	*ft_malloc_utils_2048_4096(register int size)
{
	static int	__temp_2048__[2048];
	static int	__temp_4096__[4096];

	if (size <= 2048)
		return (__temp_2048__);
	return (__temp_4096__);
}

int
	*ft_malloc_utils_8192_16384(register int size)
{
	static int	__temp_8192__[8192];
	static int	__temp_16384__[16384];

	if (size <= 8192)
		return (__temp_8192__);
	return (__temp_16384__);
}

int
	*ft_malloc_utils_32768_65536(register int size)
{
	static int	__temp_32768__[32768];
	static int	__temp_65536__[65536];

	if (size <= 32768)
		return (__temp_32768__);
	return (__temp_65536__);
}

int
	*ft_malloc_utils_131072_262144(register int size)
{
	static int	__temp_131072__[131072];
	static int	__temp_262144__[262144];

	if (size <= 131072)
		return (__temp_131072__);
	return (__temp_262144__);
}
