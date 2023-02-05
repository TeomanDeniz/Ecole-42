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
		return ((void *)_2097152_4194304_(size));
	if (size <= 16777216)
		return ((void *)_8388608_16777216_(size));
	if (size <= 67108864)
		return ((void *)_33554432_67108864_(size));
	return ((void *)_134217728_());
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
		return ((void *)_512_1024_(size));
	if (size <= 4096)
		return ((void *)_2048_4096_(size));
	if (size <= 16384)
		return ((void *)_8192_16384_(size));
	if (size <= 65536)
		return ((void *)_32768_65536_(size));
	if (size <= 262144)
		return ((void *)_131072_262144_(size));
	if (size <= 1048576)
		return ((void *)_524288_1048576_(size));
	return (ft_malloc_2(size));
}
