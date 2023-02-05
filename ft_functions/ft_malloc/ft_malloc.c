/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 17:09:54 by hdeniz            #+#    #+#             */
/*   Updated: 2023/02/05 06:04:18 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_malloc.h"

static inline void
	*ft_malloc_2(register int size)
{
	if (size <= 4194304)
		return ((void *)ft_malloc_utils_2097152_4194304(size));
	if (size <= 16777216)
		return ((void *)ft_malloc_utils_8388608_16777216(size));
	if (size <= 67108864)
		return ((void *)ft_malloc_utils_33554432_67108864(size));
	return ((void *)ft_malloc_utils_134217728());
}

void
	*ft_malloc(register int size)
{
	if (!size || size < 0)
		return (((void *)0));
	if (size <= 1)
		return ((void *)_0_1_(size));
	if (size <= 4)
		return ((void *)_2_4_(size));
	if (size <= 16)
		return ((void *)_8_16_(size));
	if (size <= 64)
		return ((void *)_32_64_(size));
	if (size <= 256)
		return ((void *)_128_256_(size));
	if (size <= 1024)
		return ((void *)ft_malloc_utils_512_1024(size));
	if (size <= 4096)
		return ((void *)ft_malloc_utils_2048_4096(size));
	if (size <= 16384)
		return ((void *)ft_malloc_utils_8192_16384(size));
	if (size <= 65536)
		return ((void *)ft_malloc_utils_32768_65536(size));
	if (size <= 262144)
		return ((void *)ft_malloc_utils_131072_262144(size));
	if (size <= 1048576)
		return ((void *)ft_malloc_utils_524288_1048576(size));
	return (ft_malloc_2(size));
}
