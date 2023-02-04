/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 17:09:54 by hdeniz            #+#    #+#             */
/*   Updated: 2023/02/04 17:11:20 by hdeniz           ###   ########.fr       */
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

void
	*ft_malloc(register unsigned int size)
{
	if (!size || size < 0)
		return (((void *)0));
	if (size >= 0 && size <= 4)
		return (malloc_help(ft_malloc_utils_0_4(size)));
	if (size <= 64)
		return (malloc_help(ft_malloc_utils_8_64(size)));
	if (size <= 1024)
		return (malloc_help(ft_malloc_utils_128_1024(size)));
	if (size <= 16384)
		return (malloc_help(ft_malloc_utils_2048_16384(size)));
	if (size <= 262144)
		return (malloc_help(ft_malloc_utils_32768_262144(size)));
	if (size <= 4194304)
		return (malloc_help(ft_malloc_utils_524288_4194304(size)));
	if (size <= 67108864)
		return (malloc_help(ft_malloc_utils_8388608_67108864(size)));
	if (size <= 134217728)
		return (malloc_help(ft_malloc_utils_134217728()));
	return (malloc_help(ft_malloc_utils_268435456()));
}
