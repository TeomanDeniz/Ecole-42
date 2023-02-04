/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc_utils_524288_268435456.c                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 18:13:16 by hdeniz            #+#    #+#             */
/*   Updated: 2023/02/04 18:13:18 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../ft_malloc.h"

int
	*ft_malloc_utils_524288_4194304(register unsigned int size)
{
	static int	__temp_524288__[524288];
	static int	__temp_1048576__[1048576];
	static int	__temp_2097152__[2097152];
	static int	__temp_4194304__[4194304];

	if (size == 524288)
		return (__temp_524288__);
	if (size == 1048576)
		return (__temp_1048576__);
	if (size == 2097152)
		return (__temp_2097152__);
	return (__temp_4194304__);
}

int
	*ft_malloc_utils_8388608_67108864(register unsigned int size)
{
	static int	__temp_8388608__[8388608];
	static int	__temp_16777216__[16777216];
	static int	__temp_33554432__[33554432];
	static int	__temp_67108864__[67108864];

	if (size <= 8388608)
		return (__temp_8388608__);
	if (size <= 16777216)
		return (__temp_16777216__);
	if (size <= 33554432)
		return (__temp_33554432__);
	return (__temp_67108864__);
}

int
	*ft_malloc_utils_134217728(void)
{
	static int	__temp__[134217728];

	return (__temp__);
}

int
	*ft_malloc_utils_268435456(void)
{
	static int	__temp__[268435456];

	return (__temp__);
}
