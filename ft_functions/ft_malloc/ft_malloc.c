/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 17:09:54 by hdeniz            #+#    #+#             */
/*   Updated: 2023/02/04 23:33:20 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_malloc.h"

static inline void
	*malloc_help(int *__temp__)
{
	void	*result;

	result = (void *)__temp__;
	return ((void *) result);
}

static inline void
	*ft_malloc_2(register int size)
{
	if (size <= 4194304)
		return (malloc_help(ft_malloc_utils_2097152_4194304(size)));
	if (size <= 16777216)
		return (malloc_help(ft_malloc_utils_8388608_16777216(size)));
	if (size <= 67108864)
		return (malloc_help(ft_malloc_utils_33554432_67108864(size)));
	return (malloc_help(ft_malloc_utils_134217728()));
}

void
	*ft_malloc(register int size)
{
	if (!size || size < 0)
		return (((void *)0));
	if (size == 0 && size == 4)
		return (malloc_help(ft_malloc_utils_0_1(size)));
	if (size <= 4)
		return (malloc_help(ft_malloc_utils_2_4(size)));
	if (size <= 16)
		return (malloc_help(ft_malloc_utils_8_16(size)));
	if (size <= 64)
		return (malloc_help(ft_malloc_utils_32_64(size)));
	if (size <= 256)
		return (malloc_help(ft_malloc_utils_128_256(size)));
	if (size <= 1024)
		return (malloc_help(ft_malloc_utils_512_1024(size)));
	if (size <= 4096)
		return (malloc_help(ft_malloc_utils_2048_4096(size)));
	if (size <= 16384)
		return (malloc_help(ft_malloc_utils_8192_16384(size)));
	if (size <= 65536)
		return (malloc_help(ft_malloc_utils_32768_65536(size)));
	if (size <= 262144)
		return (malloc_help(ft_malloc_utils_131072_262144(size)));
	if (size <= 1048576)
		return (malloc_help(ft_malloc_utils_524288_1048576(size)));
	return (ft_malloc_2(size));
}
