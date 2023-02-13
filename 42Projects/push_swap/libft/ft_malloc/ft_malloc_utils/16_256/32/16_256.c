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
	*_32__16_(register int stack)
{
	static int	_16_[16][32];

	return (_16_[stack]);
}

int
	*_32__32_(register int stack)
{
	static int	_32_[32][32];

	return (_32_[stack]);
}

int
	*_32__64_(register int stack)
{
	static int	_64_[64][32];

	return (_64_[stack]);
}

int
	*_32__128_(register int stack)
{
	static int	_128_[128][32];

	return (_128_[stack]);
}

int
	*_32__256_(register int stack)
{
	static int	_256_[256][32];

	return (_256_[stack]);
}
