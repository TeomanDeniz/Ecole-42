/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   16_256.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 18:00:09 by hdeniz            #+#    #+#             */
/*   Updated: 2023/02/07 17:04:18 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../../ft_malloc.h"

int
	*_256__16_(register int stack)
{
	static int	_16_[16][256];

	return (_16_[stack]);
}

int
	*_256__32_(register int stack)
{
	static int	_32_[32][256];

	return (_32_[stack]);
}

int
	*_256__64_(register int stack)
{
	static int	_64_[64][256];

	return (_64_[stack]);
}

int
	*_256__128_(register int stack)
{
	static int	_128_[128][256];

	return (_128_[stack]);
}

int
	*_256__256_(register int stack)
{
	static int	_256_[256][256];

	return (_256_[stack]);
}
