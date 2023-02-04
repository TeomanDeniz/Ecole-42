/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc_utils_524288_134217728.c                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 18:13:16 by hdeniz            #+#    #+#             */
/*   Updated: 2023/02/04 23:34:18 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../ft_malloc.h"

int
	*ft_malloc_utils_524288_1048576(register int size)
{
	static int	__temp_524288__[524288];
	static int	__temp_1048576__[1048576];

	if (size <= 524288)
		return (__temp_524288__);
	return (__temp_1048576__);
}

int
	*ft_malloc_utils_2097152_4194304(register int size)
{
	static int	__temp_2097152__[2097152];
	static int	__temp_4194304__[4194304];

	if (size <= 2097152)
		return (__temp_2097152__);
	return (__temp_4194304__);
}

int
	*ft_malloc_utils_8388608_16777216(register int size)
{
	static int	__temp_8388608__[8388608];
	static int	__temp_16777216__[16777216];

	if (size <= 8388608)
		return (__temp_8388608__);
	return (__temp_16777216__);
}

int
	*ft_malloc_utils_33554432_67108864(register int size)
{
	static int	__temp_33554432__[33554432];
	static int	__temp_67108864__[67108864];

	if (size <= 33554432)
		return (__temp_33554432__);
	return (__temp_67108864__);
}

int
	*ft_malloc_utils_134217728(void)
{
	static int	__temp_134217728__[134217728];

	return (__temp_134217728__);
}
