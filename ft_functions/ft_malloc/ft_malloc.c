/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 17:09:54 by hdeniz            #+#    #+#             */
/*   Updated: 2023/02/09 21:35:18 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_malloc.h"

static inline void	*ft_malloc_2(register int size);

static inline void	*ft_malloc_3(register int size);

void
	*ft_malloc(register int size)
{
	if (!size || size < 0)
		return (((void *)0));
	if (size == 0)
		return ((void *)_0_());
	if (size <= 1)
		return ((void *)_1_());
	if (size <= 2)
		return ((void *)_2_());
	if (size <= 4)
		return ((void *)_4_());
	if (size <= 8)
		return ((void *)_8_());
	if (size <= 16)
		return ((void *)_16_());
	if (size <= 32)
		return ((void *)_32_());
	if (size <= 64)
		return ((void *)_64_());
	if (size <= 128)
		return ((void *)_128_());
	if (size <= 256)
		return ((void *)_256_());
	if (size <= 512)
		return ((void *)_512_());
	return (ft_malloc_2(size));
}

static inline void
	*ft_malloc_2(register int size)
{
	if (size <= 1024)
		return ((void *)_1024_());
	if (size <= 2048)
		return ((void *)_2048_());
	if (size <= 4096)
		return ((void *)_4096_());
	if (size <= 8192)
		return ((void *)_8192_());
	if (size <= 16384)
		return ((void *)_16384_());
	if (size <= 32768)
		return ((void *)_32768_());
	if (size <= 65536)
		return ((void *)_65536_());
	if (size <= 131072)
		return ((void *)_131072_());
	if (size <= 262144)
		return ((void *)_262144_());
	if (size <= 524288)
		return ((void *)_524288_());
	if (size <= 1048576)
		return ((void *)_1048576_());
	if (size <= 2097152)
		return ((void *)_2097152_());
	return (ft_malloc_3(size));
}

static inline void
	*ft_malloc_3(register int size)
{
	if (size <= 4194304)
		return ((void *)_4194304_());
	if (size <= 8388608)
		return ((void *)_8388608_());
	if (size <= 16777216)
		return ((void *)_16777216_());
	if (size <= 33554432)
		return ((void *)_33554432_());
	return ((void *)_67108864_());
}
