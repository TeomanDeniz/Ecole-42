/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc_utils_0_256.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 18:00:09 by hdeniz            #+#    #+#             */
/*   Updated: 2023/02/04 22:02:36 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../ft_malloc.h"

int
	*ft_malloc_utils_0_1(register int size)
{
	static int	__temp_0__[0];
	static int	__temp_1__[1];

	if (size == 0)
		return (__temp_0__);
	return (__temp_1__);
}

int
	*ft_malloc_utils_2_4(register int size)
{
	static int	__temp_2__[2];
	static int	__temp_4__[4];

	if (size <= 2)
		return (__temp_2__);
	return (__temp_4__);
}

int
	*ft_malloc_utils_8_16(register int size)
{
	static int	__temp_8__[8];
	static int	__temp_16__[16];

	if (size <= 8)
		return (__temp_8__);
	return (__temp_16__);
}

int
	*ft_malloc_utils_32_64(register int size)
{
	static int	__temp_32__[32];
	static int	__temp_64__[64];

	if (size <= 32)
		return (__temp_32__);
	return (__temp_64__);
}

int
	*ft_malloc_utils_128_256(register int size)
{
	static int	__temp_128__[128];
	static int	__temp_256__[256];

	if (size <= 128)
		return (__temp_128__);
	return (__temp_256__);
}
