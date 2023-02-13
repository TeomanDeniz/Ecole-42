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
	*_128__16_(register int stack)
{
	static int	_16_[16][128];

	return (_16_[stack]);
}

int
	*_128__32_(register int stack)
{
	static int	_32_[32][128];

	return (_32_[stack]);
}

int
	*_128__64_(register int stack)
{
	static int	_64_[64][128];

	return (_64_[stack]);
}

int
	*_128__128_(register int stack)
{
	static int	_128_[128][128];

	return (_128_[stack]);
}

int
	*_128__256_(register int stack)
{
	static int	_256_[256][128];

	return (_256_[stack]);
}
